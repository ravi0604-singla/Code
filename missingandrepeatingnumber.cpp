//Brute Force will be very simple, that is iterating over the array and checking for the count of two, but it will take two nested iterations which sums up the time complexity to O(n2).
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int n = a.size();
    int hash[n+1] = {0};
    for(int i=0; i<n; i++)
    {
        hash[a[i]]++;
    }
    int repeating = -1 , missing = -1;
    for(int i=1; i<=n; i++)
    {
        if(hash[i] == 2)
        repeating = i;
        else if (hash[i] == 0)
        missing = i;
        if(repeating != -1 && missing != -1)
        {
            break;
        }
    }
    return {repeating, missing};
}
