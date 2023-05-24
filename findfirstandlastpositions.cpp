class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
    vector<int>ans{-1, -1};
      int start = 0; 
      int end = nums.size() - 1;
      while(start <= end)
      {
          int mid = start + (end - start)/2;
          if(nums[mid] == target)
          {
          ans[0] = mid;
          end = mid - 1;
          }
          else if(nums[mid] < target)
          {
              start = mid + 1;
          }
          else 
          {
              end = mid -1;
          }
      }    
     start = 0;
     end = nums.size() - 1;
      while(start <= end)
      {
          int mid = start + (end - start)/2;
          if(nums[mid] == target)
          {
          ans[1] = mid;
          start = mid + 1;
          }
          else if(nums[mid] < target)
          {
              start = mid + 1;
          }
          else 
          {
              end = mid -1;
          }
      }
      return ans;    
      // Time complexity being O(log n) as always half of the array is being searched and Space Complexity O(1)
    }
};
