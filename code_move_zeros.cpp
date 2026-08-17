#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                int temp = nums[start];
                nums[start] = nums[i];
                nums[i] = temp;
                start++;
            }
        }
    }
};

int main() {
        vector<int> nums = { 0, 1, 0, 3, 12 };

        Solution sol;
        sol.moveZeroes(nums);
        for (int n : nums) {
                cout << n << " ";
        }
        return 0;
}