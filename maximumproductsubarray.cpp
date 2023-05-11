// Brute Force Approach 
// int maximum = INT_MIN;
// int prod = 1;
// for(int i=0; i<n; i++)
// {
//   for(int j=i; j<n; j++)
//   {
//     for(int k=i; k<=j; k++)
//     {
//       prod = prod * nums[k];
//     }
//   }
// }
// maximum = max(maximum, prod);
// The Time Complexity will be near abont O(N3) and the space Complexity will be O(1)


// Better Solution
//  int maximum = INT_MIN;
// int prod = 1;
// for(int i=0; i<n; i++)
// {
//   for(int j=i; j<n; j++)
//   {
//       prod = prod * nums[j];
//   }
// }
// maximum = max(maximum, prod);
// The Time Complexity will be near abont O(N2) and the space Complexity will be O(1)

// Optimal Solution 

class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
      int pre=1, suff = 1;
      int n = nums.size();
      int ans = INT_MIN;
      for(int i=0; i<n; i++)
      {
          if(pre == 0) pre = 1;
          if(suff == 0) suff = 1;
          pre = pre * nums[i];
          suff = suff * nums[n-i-1];
          ans = max(ans, max(pre,suff));
      }  
      return ans;   // Time Complexity is O(N) and the Space Complexity will be O(1)
    }
};
