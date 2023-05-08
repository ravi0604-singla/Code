// Brute Force will be to count all the possible subarrays with sum xor k. Time Complexity will be near about to O(n3) and Space Complexity will be O(1).
   for(int i=0; i<n; i++)
   {
     for(int j=i; j<n; j++)
     {
       int XOR = 0;
       for(int k=i; k<j; k++)
       {
         XOR = XOR ^ arr[k];
       }
       if(XOR == K)
         cnt++;
     }
   }
// The better solution could be to eliminate the third loop by xoring the elements in the j loop only. now the time complexity will be O(n2) and the space complexity will be O(1).
   for(int i=0; i<n; i++)
   {
     for(int j=i; j<n; j++)
     {
       int XOR = 0;
          XOR = XOR ^ arr[j];
       }
     }
// Optimal Solution with time Complexity O(N) + O(logn) [O(1) for unordered map] for the map data structure and Space Complexity O(N) in the worst case where every entry in the map is unique.
#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    int xr = 0;
    map <int,int> mpp;
    mpp[xr]++;
    int cnt = 0;
    for(int i=0; i<a.size(); i++)
    {
      xr = xr ^ a[i];
      int x = xr^b;
      cnt += mpp[x];
      mpp[xr]++;
    }
    return cnt;
}
