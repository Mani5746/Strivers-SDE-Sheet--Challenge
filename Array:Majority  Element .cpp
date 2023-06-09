#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) 
{
	// Write your code here.
	// It is Based on Moore Voting Algorithm;
	// It States that if the majority element occurs more than N/2
	// times than all other elements will occur less than N/2 times
	/*
	Intuition Behind Working :
When the elements are the same as the candidate element, 
votes are incremented whereas when some other element is found 
(not equal to the candidate element), we decreased the count.
 This actually means that we are decreasing the priority 
 of winning ability of the selected candidate, 
 since we know that if the candidate is in majority 
 it occurs more than N/2 times and the remaining elements
  are less than N/2. We keep decreasing the votes
   since we found some different element(s)
    than the candidate element. When votes become
	 0, this actually means that there are the equal  number 
	 of votes for different elements, which should 
	 not be the case for the element to be the majority element.
	  So the candidate element cannot be the majority and
	   hence we choose the present element as the candidate
	    and continue the same till all the elements get finished
		. The final candidate would be our majority element.
		 We check using the 2nd traversal to see whether its
		  count is greater than N/2. If it is true, we consider
		   it as the majority element.
	*/

	int majorityelement=0,count=0;

	for(int i=0;i<n;i++)
	{
		if(count==0)
		{
			count=1;
			majorityelement=arr[i];
			continue;
		}

		  if(majorityelement==arr[i]) count++;

		  else count--;
	}

	count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==majorityelement) count++;
	}

	return count>n/2? majorityelement:-1;
}
