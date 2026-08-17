#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSoFar = prices[0];
        int ans = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            int currentProfit = prices[i] - minSoFar;
            ans = max(currentProfit, ans);
            minSoFar = min(minSoFar, prices[i]);
        }
        return ans;
    }
};


int main() {
    vector<int> prices = { 7,1,5,3,6,4 };
    Solution sol;
    cout << sol.maxProfit(prices) << " ";
 
    return 0;
}