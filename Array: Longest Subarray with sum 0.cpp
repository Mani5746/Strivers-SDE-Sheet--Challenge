#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr)
{

  // Write your code here

  // It works on the principle that if prefix sum at some index is S1
  // and prefix sum at other index is S2 tha=en subarray formed by these indexes 
  // form subarray of sum=0;

  int n=arr.size();
  int sum=0;
  int len=0;
  unordered_map<int,int> mp;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
    
    if(sum==0) 
    len=max(len,i+1);

    else if(mp.find(sum)!=mp.end())
    {
      len=max(len,i-mp[sum]);
    }

    else mp[sum]=i;
  }

  return len;

}
