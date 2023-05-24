class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size();
        int mid;
        if(target>nums[high-1]){
            return high;
        }
        while(low<=high)
        {
              mid=(low+high)/2;
            if(nums[mid]==target)
            {  
                return mid;
            }
          
            if(target<nums[mid])
            {       //  Time Complexity -- O(Log N) and Space Complexity -- O(1)
            high=mid-1;    
            }
            else
            {
            low=mid+1;        
            }
          
        }
         return  low;   
    }
    // if(nums.size() == 0) 
      // return 0;
      // int K = 0;
      // for(int i = 0; i < nums.size(); i++)
      //   {
      //       if(target <= nums[i]) 
      //           {
      //             K = i;
      //             break;
      //           } 
      //       else K = nums.size();
      //   } 
      //   return K;
};
