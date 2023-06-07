

#include <bits/stdc++.h> 

// Merge Sort apply karo and then in case of mergfing add count of left
// elements which are greater than Righ array elements in this way We will
// get the answer...global variable use nh karna hai ..Inteview k perspective
// se sahi nhi hai
   

   long long  merge(long long *arr,int low,int mid,int high)
  {
      vector<long long > ans;
      int left=low;
      int right=mid+1;
      long long count=0;

      while(left<=mid&&right<=high)
      {
          if(arr[left]<=arr[right])
          {
              ans.push_back(arr[left]);
              left++;
          }

          else
          {
              ans.push_back(arr[right]);
              right++;
              count+=(mid-left+1);
          }
      }

      while(left<=mid)
      {
          ans.push_back(arr[left]);
              left++;
      }

      while(right<=high)
      {
          ans.push_back(arr[right]);
              right++;
      }

      for(int i=low;i<=high;i++)
      {
          arr[i]=ans[i-low];
      }

      return count;
  }

  long long mergesort(long long *arr,int low,int high)
  {

      int count=0;

      if(low>=high) return count ;

      int mid=(low+high)/2;

      count+=mergesort(arr,low,mid);
      count+=mergesort(arr,mid+1,high);

      count+=merge(arr,low,mid,high);
  }
long long getInversions(long long *arr, int n)
{
    // Write your code here.

   

return  mergesort(arr,0,n-1);

   
    


}
