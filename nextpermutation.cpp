// Brute force is that we can generate all the possible permutation using recursion and then do a binary search for the given permutation and then we'll be printing the next possible permuation but it will be taking a very high amount of time complexity.
class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int index=-1;
        int n = nums.size();
      for(int i=n-2; i>=0; i++)
      {  
          if(nums[i] < nums[i+1])    //O(N)
          {
              index = i;
              break;
          }
      }    
      for(int i=n-1; i>=index; i--)
      {
          if(nums[i] > nums[index])
          {
              swap(nums[i], nums[index]);  //O(N)
              break;
          }
      }
      reverse(nums.begin()+index+1, nums.end());   // O(N)
    }
};    //TIME COMPLEXITY - O(N) and SPACE COMPELXITY -- O(N)
