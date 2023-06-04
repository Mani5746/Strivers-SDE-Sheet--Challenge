#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices)
{
    // Write your code here.
    int n=prices.size();
   int mini=INT_MAX;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,prices[i]);
        mx=max(mx,prices[i]-mini);
    }

    return mx;
}
