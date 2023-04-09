// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) 
//     {
//         int cnt=0;
//        for(int i=0; i<nums.size(); i++)
//        {
//            for(int j=i+1; j<nums.size()-1; j++)
//            {
//                int sum = 0;
//                for(int k=i; k<j; k++)
//                {
//                    sum = sum + nums[k];
//                }
//              if(sum == k)
//              {
//                  cnt++;
//              }
//            }
//        }    
//        return cnt;
//     }
// };
// // BRUTE FORCE SOLUTION
// class Solution {
// public:
//     int subarraySum(vector<int>& arr, int k) {
//         int n = arr.size(); // taking the size of the array
        
//         int ans = 0; // ans variable to store our count
        
//         for(int i = 0; i < n; i++) // traverse from the array
//         {
//             int sum = arr[i]; // provide sum with arr[i]
            
//             if(sum == k) // if element itself equal to k, then also increment count
//                 ans++;
            
//             for(int j = i + 1; j < n; j++) // now moving forward,
//             {
//                 sum += arr[j]; // add elements with sum
                
//                 if(sum == k) // if at any point they become equal to k
//                     ans++; // increment answer
//             }
            
//         }
        
//         return ans; // and at last, return answer
//     }
// };
class Solution
{
    public:
    int subarraySum(vector<int>& arr, int k) 
    {
        unordered_map<int,int>mpp;
        mpp[0] = 1;
        int preSum = 0; 
        int cnt =0;
        for(int i=0; i<arr.size(); i++)
        {
            preSum += arr[i];
            int remove = preSum - k;
            cnt += mpp[remove];
            mpp[preSum] += 1;
        }
        return cnt;
    }
};
