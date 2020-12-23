class Solution {
public:
    int dp[1001][1001];
    int lps(string &s,int i, int j){
        if(i>j) return dp[i][j] = 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(i == j) return dp[i][j] = 1;
​
        if(s[i] == s[j]) return dp[i][j] = lps(s,i+1,j-1)+2;
        return dp[i][j]=max(lps(s,i+1,j),lps(s,i,j-1));
}
    int longestPalindromeSubseq(string s) {
        memset(dp,-1,sizeof dp);
        return lps(s,0,s.length()-1);
        
    }
};
