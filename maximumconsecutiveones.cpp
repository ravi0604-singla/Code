class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int count=0;
        int maximum=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                count++; 
                maximum = max(maximum, count); //Time Complexity - O(n) as done in single traversal and space complecity -- O(1)
            }
            else
            {
                count = 0;
            }
        }
    return maximum;
    }
};
