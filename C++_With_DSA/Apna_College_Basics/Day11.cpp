#include <iostream>
#include <vector>
using namespace std;

int powExponential(double x, int n) {
		long binForm = n;
		double ans = 1;

		if(n < 0) {
			x = 1/x;
			binForm = -binForm;
		}

		while(binForm > 0) {
			if(binForm % 2 == 1) {
					ans *= x; 
			}
			binForm /= 2;
			x *= x;
		}
		return ans;
}

int bestTimeToSell(vector<int>& prices) {
	int maxP = 0;
	int bestBuy = prices[0];

	for(int i = 0; i < prices.size(); i++) {
			if(prices[i] > bestBuy) {
					maxP = max(maxP, prices[i] - bestBuy);
			}
			bestBuy = min(bestBuy,prices[i]);
	}
	return maxP;
}

// Handle Edge Cases 

int selfTryBestBuy(vector<int>& prices) {
	int bestBuy = prices[0];
	int maxProfit = 0;

	for(int i = 1; i <= prices.size(); i++) {
		bestBuy = min(bestBuy, i);
		maxProfit = max((i - bestBuy), maxProfit);

		cout << bestBuy << " " << maxProfit << endl;
	}

	return maxProfit;
}

int main() {

	vector<int> stockPrices = {7,1,5,3,6,4};

	cout << "We are performing Binary Exponential Problem" << endl;

	double ans = powExponential(2, 6);

	cout << "The answer is " << ans << endl;

	int maxProfit = selfTryBestBuy(stockPrices);

	cout << "The Max Profit is " << maxProfit << endl;
}