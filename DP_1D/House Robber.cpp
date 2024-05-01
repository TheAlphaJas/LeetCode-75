class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,0);
        for(int i = 0; i < n ;i++) {
            dp[i] = max(dp[i],nums[i]);
            if (i-2 >= 0) {dp[i] = max(dp[i],dp[i-2] + nums[i]);}
            if (i-3 >= 0) {dp[i] = max(dp[i],dp[i-3] + nums[i]);}
        }
        if (n == 1) {return dp[0];}
        return max(dp[n-1],dp[n-2]);
    }
};
