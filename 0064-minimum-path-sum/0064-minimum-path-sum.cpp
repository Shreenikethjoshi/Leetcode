class Solution {
public:
    long helper(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &dp){
        if(i==0 && j==0 ) return grid[0][0];
        if(i<0 || j<0) return INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        long up=grid[i][j]+helper(i-1,j,grid,dp);
        long left=grid[i][j]+helper(i,j-1,grid,dp);
        return dp[i][j]= min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return helper(n-1,m-1,grid,dp);
    }
};