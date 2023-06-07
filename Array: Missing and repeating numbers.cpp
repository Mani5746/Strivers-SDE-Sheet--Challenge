#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int xor_all_num=0;
	int xor_arr=0;

	int mis,dup;

	for(int i=1;i<=n;i++) xor_all_num^=i;
	for(int i=0;i<n;i++) xor_arr^=arr[i];

	// mis=missing number,dup==duplicate number

	int mis_xor_dup=xor_all_num^xor_arr;
     
	 

// This is helpful in findng the LSB set..mtlb jo lsb is set hog awo bta dega

	 int setBit=mis_xor_dup & ~(mis_xor_dup-1);

	 int L=0,R=0;
	 /* We are now Separating the Numbers which are having set bit as SetBit
	     and other with having not set bit as SET Bit ij both array and 
		 int natural number betwen 1 to N Unka Xor leleo phir unme se ek 
		 missing aaega nad ek Repeating aaega and linear Search se phir missing ad repeating find karlo*/

	 for(int i=0;i<n;i++)
	 {
		 if(arr[i]&setBit) L^=arr[i];

		 else
		 R^=arr[i];
	 }

	  for(int i=1;i<=n;i++)
	 {
		 if(i&setBit) L^=i;

		 else
		 R^=i;
	 }

	 for(int i=0;i<n;i++)
	 {
		 if(L==arr[i])
		 {
			 return {R,L};
		 }
	 }

	 return {L,R};
}
