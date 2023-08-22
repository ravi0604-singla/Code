#include <bits/stdc++.h> 
int lowerBound(vector<int> arr, int n, int x) 
{
 int low=0; int high=n-1;
 int ans = n;
 while(low <= high)
 {
	int mid = low + (high - low)/2;
	 if(arr[mid] >= x)
	 {
		 ans = mid;
		 high = mid - 1;
	 }
	 else
	 {
		 low = mid + 1;
	 }
 }	
}
int upperBound(vector<int> &arr, int n, int x)
{
 int low=0; int high=n-1;
 int ans = n;
 while(low <= high)
 {
	 int mid = low + (high - low)/2;
	 if(arr[mid] > x)
	 {
		 ans = mid;
		 high = mid - 1;
	 }
	 else
	 {
		 low = mid + 1;
	 }
 }	
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int lb = lowerBound(arr, n, k);
    if(lb == n || arr[lb] != k)
    return {-1, -1};
    return {lb, upperBound(arr, n, k )-1};
}
