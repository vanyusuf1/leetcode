class Solution {
    public int getMaximumGold(int[][] grid) {
        if(grid==null || grid.length==0) return 0;
        int max=0,m=grid.length, n =grid[0].length;
        for(int i=0; i<m; i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]>0){
                    int gold=maxgold(grid,i,j,m,n, new boolean[m][n]);
                    max=Math.max(gold,max);
                }
            }
        }
    return max;}
   private int maxgold(int[][] grid, int i, int j, int m, int n , boolean visited[][] ) {
          if(i<0 || j<0 || i>=m || j>=n|| visited[i][j] || grid[i][j]==0) return 0;
              
              visited[i][j]=true;
              int left= maxgold(grid,i,j-1,m,n,visited);
              int right= maxgold(grid,i,j+1,m,n,visited);
              int up= maxgold(grid,i-1,j,m,n,visited);
              int down= maxgold(grid,i+1,j,m,n,visited);
               visited[i][j]=false;
              return Math.max(left,(Math.max(right, Math.max(up,down))))+ grid[i][j];
              
          
   }
}
