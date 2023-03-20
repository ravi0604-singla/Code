// // Brute Force Approach -- We can store the elements as the keys in the HashMap and then store the count and compare the keys (elements) 
// // with > n/2 elements
// The Better solution can be to store the elements and their frequency in an Unordered Map and  it will take O(N log N) and an extra O(N) to retrieve.
// That is why we come up to an optimal approach that is the usage of Moore's Voting Algorithm.
// // Moore's Voting Problem
class Solution 
{
    public:
    int majorityElement(vector<int>&nums)
    {
     int count=0;
     int cnt1=0;
     int element;
     for(int i=0; i<nums.size(); i++)
     {
         if(count == 0)
         {
             count =1;
             element = nums[i];
         }
         else if(nums[i] == element)
         {
             count++;
         }
         else
         {
             count--;
         }
     }  
  for(int i=0; i<nums.size(); i++)
     {
         if(nums[i] == element)
         {
             cnt1++;
         }
     }
     if(cnt1 > (nums.size()/2))
     {
         return element;
     }
     else
     {
         return -1;
     }
    }
};
