class Solution 
{
public:
    int singleNumber(vector<int>& nums)
    // {
    //     int cnt=0;
    //     int number =0;
    //     for(int i=0; i<nums.size(); i++)
    //     {
    //         int number = nums[i];   //Brute Force Solution -- Time Complexity -- O(n2)
    //     } 
    //     for(int j=0; j<nums.size(); j++)
    //     {
    //         if(nums[j] == number)
    //         {
    //             cnt++;
    //         }
    //     }
    //     if(cnt == 1)
    //     return number;
    // }
    // {
    //     //We can also use ordered map which will take O(n log n) time complexity and O(n/2 +1) space 
    // }
    {
        // Optimal Solution

        int xorr = 0;
        for(int i=0; i<nums.size(); i++)
        {
            xorr = xorr^nums[i];
        }
        return xorr;
    }
};
