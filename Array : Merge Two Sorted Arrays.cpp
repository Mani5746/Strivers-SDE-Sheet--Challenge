#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n)
{
	// Write your code here.

	// Using Merge Technique

	vector<int>a1;
        for (int i = 0; i < arr1.size(); i++) {
          if (arr1[i] != 0)
            a1.push_back(arr1[i]);
        }

        vector<int> ans;
	int i=0,j=0;

	while((i<a1.size())&&(j<arr2.size()))
	{
          if (a1[i] < arr2[j])
		{
            ans.push_back(a1[i]); i++;

          }

          else if (a1[i] >= arr2[j]) {
            ans.push_back(arr2[j]);
            j++;
          }
    }

        while (i < a1.size()) {
          ans.push_back(a1[i]); i++;
        }

        while (j < arr2.size()) {
          ans.push_back(arr2[j]); j++;
        }

		return ans;
}
