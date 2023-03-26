class Solution
{
public:
    vector<int> leaders(int a[], int n)
    {
     vector<int>ans;
     int maximum = INT_MIN;
     for(int i=n-1; i>0; i--)
     {
         if(a[i] > maximum)
         maximum = a[i];
         ans.push_back(maximum);
     maximum = max(maximum,a[i]);
     }
     reverse(ans.begin(),ans.end());
     return ans;
    }
};
