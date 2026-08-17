#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int majElement=0, maxOcc=0;
		for (int i = 0; i < nums.size(); i++){
			int currentElement = nums[i];
			int currentOcc = 0;
			for (int j = 0; j < nums.size(); j++) {
				if (currentElement == nums[j])
					currentOcc++;
			}
			if (maxOcc < currentOcc)
				majElement = currentElement;
		}
		return majElement;
	}
};

int main() {
	vector<int> nums = {3, 2, 3, 4 ,4 , 4};
	Solution sol;
	cout << "Majority Element: " << sol.majorityElement(nums) << " ";

	return 0;
}