#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSumBruteForce(vector<int>& nums, int target) {

    vector<int> pairs;

    int right = nums.size() - 1;
    int left = 0;
    int mid = right / 2;

    // Compare if the mid value is greater than the given value
    if(nums[mid] >= target) {
        right = mid - 1;
    }

    cout << "Right : " << right << " Left " << left << endl;

    for(left; left <= right; left++) {
        for(int j = left + 1; j <= right; j++) {
            if(nums[left] + nums[j] == target) {
                pairs.push_back(nums[left]);
                pairs.push_back(nums[j]);
            }
        }
    }

    return pairs;
} 

vector<int> pairSumOptimized(vector<int>& nums, int target) {

	vector<int> pairs;

	int right = nums.size() - 1;
	int left = 0;

	cout << "Right : " << right << " Left " << left << endl;

	while(left < right) {
		int pairSum = nums[left] + nums[right];

		if(pairSum > target) {
				right--;
		}
		else if(pairSum < target) {
			left++;
		}
		else {
			pairs.push_back(nums[left]);
			pairs.push_back(nums[right]);
			break;
		}
	}
	return pairs;
} 

int majorityElementBruteForce(vector<int>& arr2) {
	
	int maxCount = arr2.size() / 2;	
	int element;

	cout << "Max " << maxCount << endl;

	for(int i = 0; i < arr2.size(); i++) {
		int currCount = 1;
		for(int j = i + 1; j < arr2.size(); j++) {
			if(arr2[i] == arr2[j]) {
				currCount++;
			}
		}
		if(currCount > maxCount) {
			element = arr2[i];
			break;
		}
	}
	return element;
}

int main() {
    int target = 9;
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    
    vector<int> pairs = pairSumBruteForce(arr, target);

    cout << "Pair Sum Brute Force Approach, paris are below :" << endl;

    for(int num : pairs) {
      cout << num << " ";
    }

    cout << endl;

    cout << "Pair Sum Optimized Approach, paris are below :" << endl;

    vector<int> pairsOptimized = pairSumOptimized(arr, target);

    for(int num : pairsOptimized) {
      cout << num << " ";
    }

    cout << endl;

		vector<int> arr2 = {2,2,1,1,1,2,2};

		cout << "Majority Element Brute Force Approach, below is the number:" << endl;

    int element = majorityElementBruteForce(arr2);

		cout << element;

    cout << endl;
}