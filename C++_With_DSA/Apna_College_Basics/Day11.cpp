#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int powExponential(double x, int n)
{
	long binForm = n;
	double ans = 1;

	if (n < 0)
	{
		x = 1 / x;
		binForm = -binForm;
	}

	while (binForm > 0)
	{
		if (binForm % 2 == 1)
		{
			ans *= x;
		}
		binForm /= 2;
		x *= x;
	}
	return ans;
}

int bestTimeToSell(vector<int> &prices)
{
	int maxP = 0;
	int bestBuy = prices[0];

	for (int i = 0; i < prices.size(); i++)
	{
		if (prices[i] > bestBuy)
		{
			maxP = max(maxP, prices[i] - bestBuy);
		}
		bestBuy = min(bestBuy, prices[i]);
	}
	return maxP;
}

// Handle Edge Cases

int selfTryBestBuy(vector<int> &prices)
{
	int bestBuy = prices[0];
	int maxProfit = 0;

	for (int i = 1; i < prices.size(); i++)
	{
		bestBuy = min(bestBuy, prices[i]);
		maxProfit = max((prices[i] - bestBuy), maxProfit);

		cout << bestBuy << " " << maxProfit << endl;
	}

	return maxProfit;
}

int bestBuySell(vector<int> &prices)
{
	int mini = INT_MAX;
	int maxi = INT_MIN;

	for (int num : prices)
	{
		mini = min(num, mini);
		maxi = max((num - mini), maxi);
		cout << mini << " " << maxi << endl;
	}

	return maxi;
}

int selfTryMaxContainerFailed(vector<int> &height)
{
	int maxContainer = INT_MIN;
	int step = -1;

	for (int i = 0; i < height.size(); i++)
	{
		maxContainer = max(step * height[i], maxContainer);
		step++;
	}
	return maxContainer;
}

int twoPointerMaxContainer(vector<int> &height)
{
	int maxContainer = INT_MIN;
	int lp = 0, rp = height.size() - 1;

	while (lp < rp)
	{
		int w = rp - lp;
		int ht = min(height[lp], height[rp]);

		maxContainer = max(maxContainer, w * ht);

		height[lp] < height[rp] ? lp++ : rp--;
	}
	return maxContainer;
}

int main()
{

	// vector<int> stockPrices = {7, 6, 4, 3, 1};

	vector<int> stockPrices = {7, 1, 5, 3, 6, 4};

	vector<int> heightArr = {1, 8, 6, 2, 5, 4, 8, 3, 7};

	cout << "We are performing Binary Exponential Problem" << endl;

	double ans = powExponential(2, 6);

	cout << "The answer is " << ans << endl;

	int maxProfit = bestBuySell(stockPrices);

	cout << "The Max Profit is " << maxProfit << endl;

	cout << endl;

	int maxContainer = selfTryMaxContainerFailed(heightArr);

	cout << "The Max Container Self Try is " << maxContainer << endl;

	int maxContainerTwoPointer = twoPointerMaxContainer(heightArr);

	cout << endl;

	cout << "The Max Container Two Pointer is " << maxContainerTwoPointer << endl;
}