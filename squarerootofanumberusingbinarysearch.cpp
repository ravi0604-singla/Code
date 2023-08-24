int floorSqrt(int n)
{
    // BRUTE FORCE APPROACH
    // int ans = 1;
    // for(int i=1; i<n; i++)
    // {
    //     if(i*i <= n)
    //     {
    //         ans = i;
    //         continue;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // return ans; 
    // OPTIMAL APPROACH USING BINARY SEARCH 
    int low = 1; int high = n;
    int ans = 1;
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if((mid * mid) <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
