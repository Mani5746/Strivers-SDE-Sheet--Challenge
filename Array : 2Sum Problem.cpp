#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
   // Write your code here.
      unordered_map<int,int> mp;
      vector<vector<int>>ans;
      int n=arr.size();
     
      for(int i=0;i<n;i++)
      {
         int target=s-arr[i];
         if(mp.find(target)!=mp.end())
         {
            int mini=min(target,arr[i]);
            int maxi=max(arr[i],target);

            for(int i=0;i<mp[target];i++)
            {
               ans.push_back({mini,maxi});
            }
         }

         mp[arr[i]]++;
      }

      sort(ans.begin(),ans.end());

      return ans;

}
