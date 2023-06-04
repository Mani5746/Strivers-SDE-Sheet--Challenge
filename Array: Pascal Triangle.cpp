#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.

  vector<vector<long long int>> ans;

  for(int i=0;i<n;i++)
  {
    vector<long long int> v1;
    for(int j=0;j<i+1;j++)
    {
        if(j==0||j==i)
        {
           v1.push_back(1);
        }

        else
        {
          v1.push_back(ans[i-1][j]+ans[i-1][j-1]);
        }
    }

    ans.push_back(v1);
  }

  return ans;
}
