// The brute force for the problem can be the sorting using merge sort which will take O(nlogn) time complexity and an extra space of O(n)
// that is the temp array required to sort it.
// The Better soltuion could be that we search for individual 0 1 and 2 and keep a counter of them and then run a loop from 0 to cnt to override the previous values, it will take O(2N) time to run and no extra space.
// OPTIMAL SOLUTION
class Solution {
    public:
    void sortColors(vector<int> &nums)
    {
         int low=0, mid=0,high=nums.size()-1;
         while(mid<=high)
         {
             if(nums[mid] == 0)
             {
                 swap(nums[low],nums[mid]);
                 low++;
                 mid++;
             }
             else if(nums[mid] == 1)
             {
                 mid++;
             }
             else
             {
                 swap(nums[mid],nums[high]);
                 high--;
             }
         }
    }
};
