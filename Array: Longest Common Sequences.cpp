#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
{
    // Write your code here.

    unordered_set<int> st;
    for(auto it: arr) st.insert(it);
    int longest_streak=0;

    for(auto it: arr)
    {
       
        if(!st.count(it-1))
        {
             auto num=it;
            int streak=1;

            while(st.count(num+1))
            {
                streak++;
                num++;
            }

            longest_streak=max(longest_streak,streak);
            
        }
    }
    return longest_streak;
}
