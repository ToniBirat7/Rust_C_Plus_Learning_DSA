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

int main() {

	cout << "We are performing Binary Exponential Problem" << endl;

	double ans = powExponential(2, 6);

	cout << "The answer is " << ans << endl;

}