#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int>v;
	int i=0; 
	int j=0;   // Brute Force takes O(n1*n2) time complexity
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		{
			i++;
		}
		else if(arr1[i] > arr2[j])
		{
			j++;
		}
		else
		{
          v.push_back(arr1[i]); // Time Complexity  = O(n1 + n2) and space complexity O(v) as extra vector required
	
		  i++;
		  j++;
		}
	}
	return v;
 }
