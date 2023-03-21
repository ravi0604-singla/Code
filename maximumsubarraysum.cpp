class Solution
{
  public:
  int maxSubarray(vector<int>&nums)
  {
    int max = INT_MIN;
    int sum = 0;
    for(int i=0; i<nums.size(); i++)
    {
      sum += nums[i];
      if(sum > maxi)
        maxi = sum;
      if(sum < 0)
        sum = 0;
    }
    return maxi
   }
};
