// We have to calculate (A^N)%M;
We use Binary Exponenetiaon Method in this power is broken down into form of Binary 
i.e if N=13-----> 1101 binary Conversion We intilaise ans=1;

while(n>0)
{
if(bit is set for n) Then It will contribute to the answer
{
update ans=ans*a;
}

now change a=a*a;
baar baar vye step karenge and N ko right shift karenge taaki dekh sake ki konsa bit hmara answer me contribute kar raha hai.
}


a=3,b=13,ans=1;

a             b               ans
3            1101          1           Intial Value--> After checking 0th bit of b is set then
3*3         110            1*    previoius a(3)---> now this 0th bit is not set then it will not contribute to the 
                                             answer
3^4            11              3* 3^4

3^8           1                  3*3^4*3^8


continue the same process





#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) 
{
	// Write your code here.

	int ans=1;

	while(n)
	{
         if(n&1)
		 {
			 ans=(ans*1LL*x)%m;

		 }
		 x=(x*1LL*x)%m;
		 n=n>>1;
	}

	return ans;
}
