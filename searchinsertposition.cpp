class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
      if(nums.size() == 0) 
      return 0;
      int K = 0;
      for(int i = 0; i < nums.size(); i++)
        {
            if(target <= nums[i]) 
                {
                  K = i;
                  break;
                } 
            else K = nums.size();
        } 
        return K;
    }
};
