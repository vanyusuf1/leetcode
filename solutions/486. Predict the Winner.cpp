class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int n =nums.size(), dp[n][n];
        memset(dp, 0, n*n*sizeof(int));
        for(int i=0;i<n;i++) 
            dp[i][i] = nums[i];
        for(int l=1; l<n;l++)
            for(int i=0;i+l<= n-1;i++)
                dp[i][i+l] = max(nums[i] - dp[i+1][i+l], nums[i+l] - dp[i][i+l-1]);
        return dp[0][n-1] >= 0;
    }
};
