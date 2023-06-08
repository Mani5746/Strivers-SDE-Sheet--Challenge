#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.

    // Not More Than 2 elements can occur more than N/3 times
    // Therefore We take adv. of this property and deal with the
    // Make Two Elements and make two count for each elements and apply
    // Voting moore algorithm
    int n=arr.size();
    int el1=0,el2=0;
    vector<int> res;
    int count1=0,count2=0;

    for(int i=0;i<arr.size();i++)
    {
       

         if(el1==arr[i])
        {
            count1++;

            
        }

        else if(el2==arr[i])
        {
            count2++;

            
        }

         else if(count1==0)
        {
            count1=1; el1=arr[i];
        }

        else if(count2==0){
            count2=1;
            el2=arr[i];
        }

        else{
            count1--; count2--;
        }
    }

    count1=0,count2=0;


     for(int i=0;i<n;i++)
     {
         if(arr[i]==el1) count1++;

         if(arr[i]==el2) count2++;

         
     }

     if(count1>n/3) res.push_back(el1);
     if(count2>n/3) res.push_back(el2);

     return res;


}
