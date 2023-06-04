class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        vector<int> ans;

        map<int,int> mp;
        map<int,int> mp1;
        for(int i=0;i<n;i++)
        {
           mp.insert({nums[i],i+1});
        }

         for(int i=n-1;i>=0;i--)
        {
           mp1.insert({nums[i],i+1});
        }

        for(int i=0;i<n;i++)
        {
            if(mp[target-nums[i]]>0)
            {
                if(mp[target-nums[i]]!=mp[nums[i]])
                {
                   ans.push_back(mp[nums[i]]-1);
                   ans.push_back(mp[target-nums[i]]-1);
                   break;
                }

                else
                {
                    if(mp1[target-nums[i]]!=mp[target-nums[i]])
                    {
                     ans.push_back(mp[nums[i]]-1);
                   ans.push_back(mp1[target-nums[i]]-1);
                  
                  
                   break;
                    }
                }
            }
        }

        return ans;
    }
};
