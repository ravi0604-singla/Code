class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        if(nums.size() == 1)
        return nums[0];
        if(nums[0] < nums[nums.size() - 1])
        return nums[0];
        int low =0;
        int high = nums.size() - 1;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(nums[0] <= nums[mid])
            {
            low = mid + 1;
            }
            else{
            high = mid - 1;
            }
        }   
        return nums[low];
    }
};
