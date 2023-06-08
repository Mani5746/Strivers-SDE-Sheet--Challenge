#include <bits/stdc++.h> 
int func(int row,int col,vector<vector<int>>&dp)
{
   if(row<0||col<0) return 0;

   if(row==0&&col==0) return 1;

   if(dp[row][col]!=-1) return dp[row][col];

   // Top and Left

   int top=func(row-1,col,dp);
   int left=func(row,col-1,dp);

   return dp[row][col]=top+left;

}
int uniquePaths(int m, int n)
 {
	// Write your code here.
	vector<vector<int>> dp(m+1,vector<int>(n+1,-1));

	return func(m-1,n-1,dp);
}
