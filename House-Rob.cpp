class Solution {
public:
    int rob(vector<int>& nums) {
        int arrLen = nums.size();
        vector<int> memo(arrLen, -1);
        return dp(nums, 0, arrLen, memo);
        
    }
    int dp(vector<int>& nums, int low, int high, vector<int>& memo){
        if(low >= high){
            return 0;
        }
        if(memo[low] != -1) return memo[low];

        int valFirst, valSecond;
        valFirst = nums[low] + dp(nums, low + 2, high, memo);
        valSecond = dp(nums, low + 1, high, memo);
        memo[low] = max(valFirst, valSecond); 
        return memo[low];
    }
};
