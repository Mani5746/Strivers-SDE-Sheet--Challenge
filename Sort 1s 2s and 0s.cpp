#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int zero_ind=0;
   int two_ind=n-1;

   int i=0;
   while(i<=two_ind)
   {
      if(arr[i]==0)
      {
         swap(arr[i],arr[zero_ind]); zero_ind++; i++;
      }

      else if(arr[i]==2)
      {
         swap(arr[i],arr[two_ind]); two_ind--;
      }

      else
      {
         i++;
      }
   }


}
