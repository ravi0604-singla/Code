class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        //Brute Force -- Take one element and check it with every other element 
     for(int i=0; i<nums.size(); i++)
     {
         for(int j=i+1; j<nums.size(); j++)
         {
             if(i==j) continue;
             if(nums[i] + nums[j] == target)  //Time complexity -- O(n2)
             {
                 return{i,j};
             }
         }
     }   
     return {}; 
    //Better Solution -- Hashing O(n) or O(nlogn)
    //Iterating on the element once
    //Sligtly better solution -- GREEDY APPROACH
    
    }
};
