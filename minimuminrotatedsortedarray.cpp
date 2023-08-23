class Solution {
public:
    // int findMin(vector<int>& nums) 
    // {
    //     if(nums.size() == 1)
    //     return nums[0];
    //     if(nums[0] < nums[nums.size() - 1])
    //     return nums[0];
    //     int low =0;
    //     int high = nums.size() - 1;
    //     while(low <= high)
    //     {
    //         int mid = low + (high - low)/2;
    //         if(nums[0] <= nums[mid])
    //         {
    //         low = mid + 1;
    //         }
    //         else{
    //         high = mid - 1;
    //         }
    //     }   
    //     return nums[low];
    // }
int findMin(vector<int>&arr)
{
    int low = 0;
    int n = arr.size();
    int ans = INT_MAX;
    int high = n - 1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(arr[low]<=arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else
        {
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
}
};
