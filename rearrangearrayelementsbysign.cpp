// The Brute force will be to take two arrays of negatives and positive numbers and store them accordingly in the arrays and then we'll be merging the arrays to get the final result
//The Brute force will be taking a O(n) to take the positives and negatives and then the merge will require an extra O(N) time comlexity. Also the space complexity will be O(N)
// The Optimal solution comes up with an extra space as taken in the brute force solution and is done in a single pass of the array. 
class Solution 
{
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int n = nums.size();
        int posIndex = 0;
        int negIndex = 1;
        vector<int>ans(n,0);
        for(int i=0; i<n; i++)
        {
            if(nums[i] > 0)
            {
                ans[posIndex] = nums[i];
                posIndex = posIndex+2;
            }
            else
            {
                ans[negIndex] = nums[i];
                negIndex = negIndex + 2;
            }
        }
    return ans;
    }
};
