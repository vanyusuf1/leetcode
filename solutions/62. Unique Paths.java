class Solution {
    public int uniquePaths(int m, int n) {
        int[][] dp=new int[n][m];
        int i,j;
        for(i=n-1;i>=0;i--)
            for(j=m-1;j>=0;j--)
            {
                if(j==m-1||i==n-1)
                    dp[i][j]=1;
                else 
                    dp[i][j]=dp[i+1][j]+dp[i][j+1];
            }
        return dp[0][0];
    }
}
