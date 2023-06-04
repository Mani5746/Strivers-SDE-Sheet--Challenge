#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
      long long  maxsum=0;
      long long sum_so_far=0;

      for(int i=0;i<n;i++)
      {
          sum_so_far+=arr[i];

         

          if(sum_so_far<0) sum_so_far=0;
          maxsum=max(maxsum,sum_so_far);
      }

      return maxsum;
    
}
