class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
    //   Brute Force technique
    //     set<vector<int>>st;
    //     int n = nums.size();
    //     for(int i=0; i<n; i++)
    //     {
    //         for(int j=i+1; j<n; j++)
    //         {
    //             for(int k= j+1; k<n; k++)
    //             {
    //                 if(nums[i] + nums[j] + nums[k] == 0)
    //                 {
    //                     vector<int>temp = {nums[i], nums[j], nums[k]};
    //                     sort(temp.begin(), temp.end());
    //                     st.insert(temp);
    //                 }
    //             }
    //         }
    //     }
    // vector<vector<int>>ans(st.begin(), st.end());
    // return ans;
     set<vector<int>>st;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            set<int>hashSet;
            for(int j=i+1; j<n; j++)
            {
                  hashSet.insert(nums[j]);
                  int third = -(nums[i] + nums[j]);
                  if(hashSet.find(third) != hashSet.end())
                  {
                      vector<int>temp = {nums[i], nums[j], nums[third]};
                      sort(temp.begin(), temp.end());
                    st.insert(temp);
                  }
                  hashSet.insert(nums[j]);
            }
        }
        vector<vector<int>>ans(st.begin(), st.end());
        return ans;
    }
};1
