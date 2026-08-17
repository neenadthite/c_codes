#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int n = nums.size();

		return nums[n/2];
	}
};

int main() {
	vector<int> nums = {3, 2, 3, 4 ,4 , 4};
	Solution sol;
	cout << "Majority Element: " << sol.majorityElement(nums) << " ";

	return 0;
}