class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        vector<vector<int>>ans;
        
        int s,e;
         

        for(int i=0;i<n;i++)
        {
            s=i+1; e=n-1;
            
            int t=0-nums[i];
           

            while(s<e)
            {

                 if(nums[s]+nums[e]==t)
                {
                    ans.push_back({nums[i],nums[s],nums[e]});

                    while(s<e&&nums[s]==nums[s+1]) s++;
                    while(s<e&&nums[e]==nums[e-1]) e--;
                    s++;e--;
                  
                }

                else if(nums[s]+nums[e]>t) e--;

                else  s++;

                
            }

            while(i+1<n&&nums[i]==nums[i+1]) i++;
           

            //else e=n-1;
        }

        return ans;
    }
};
