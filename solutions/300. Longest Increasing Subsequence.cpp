class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int n = nums.size() ;
        int *dp = new int[n];
        for(int i = 0 ; i < n ; i++) dp[i] = 1;
        int ans = 1;
        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j <=i - 1; j ++){
                if(nums[i]>nums[j]){
                    dp[i] = max(dp[i],dp[j]+1);
                    ans = max(ans,dp[i]);
                }
            }
        }
        
        return ans;
    }
};
