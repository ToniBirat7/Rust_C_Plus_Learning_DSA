#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int kadanesAlgorithm(vector<int>& nums) {

	int maxSum = INT_MIN;
	int currSum = 0;

	for(int num : nums) {
		currSum += num;
		maxSum = max(currSum, maxSum);
		if(currSum < 0) {
			currSum = 0;
		}
	}
	return maxSum;
}

void maximumSubarraySumBruteForceO3(vector<int>& nums) {
    
	int max = INT_MIN;
	int start;
	int end;

	for(int i = 0; i < nums.size(); i++) {
		for(int j = i; j < nums.size(); j++) {
			int sum = 0;
			for(int k = i; k <= j; k++) {
				sum += nums[k];
			}
			if(sum > max) {
				max = sum;
				start = i;
				end = j;
			}
		} 
	}

	cout << "The subarray [";

	for(int i = start; i <= end; i++) {
		cout << nums[i] << ",";
	}

	cout << "] has the largest sum " << max << endl;

}

void maximumSubarraySumBruteForceO2(vector<int>& nums) {
    
	int maxSum = 0;
	int startIndex;
	int endIndex;

	for(int start = 0; start < nums.size(); start++) {
		int currSum = 0; 
		for(int end = start; end < nums.size(); end++) {
			currSum += nums[end];
			if(currSum > maxSum) {
				maxSum = currSum;
				startIndex = start;
				endIndex = end;
			}
		}
	}

	cout << "The subarray [";

	for(int i = startIndex; i <= endIndex; i++) {
		cout << nums[i] << ",";
	}

	cout << "] has the largest sum " << maxSum << endl;

};

int main() {

	vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};

	// vector<int> arr = {-1,-2,-3,-4,-5}; All Negative

	cout << "Brute Force O(n^3)" << endl;

	maximumSubarraySumBruteForceO3(arr);

	cout << "Brute Force O(n^2)" << endl;

	maximumSubarraySumBruteForceO2(arr);

	cout << "Kadane's Algorithm O(n)" << endl;

	int maxSum = kadanesAlgorithm(arr);

	cout << "Max Sum is " << maxSum << endl;
};