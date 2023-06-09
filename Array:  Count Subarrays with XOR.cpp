#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    // Write your code here.

    // Just Iterate Over the Array and Stire the array phir agar wo 
    // Target l equal hua to ans++;
    // else rem=XOR^target...uska frequency check kro map me utne se ans increment kro
    //  end step mp[XOR]++;
    unordered_map<int,int> mp;
    int n=arr.size();
    int ans=0;
    int XOR=0;
    for(int i=0;i<n;i++)
    {
        XOR^=arr[i];
        if(XOR==x) ans++;

       
            int rem=XOR^x;
            if(mp.find(rem)!=mp.end())
            ans+=mp[rem];
        

        mp[XOR]++;

    }

    return ans;
}
