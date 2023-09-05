int sumofD(vector<int>&arr, int div)
{
	int sum = 0;
	int n = arr.size();
	for(int i=0; i<n; i++)
	{
		sum += ceil(double(arr[i])/ double(div));
	}
	return sum;
}
int smallestDivisor(vector<int>&arr, int limit)
{
	int low = 1;  
	int high = *max_element(arr.begin(), arr.end());   // Time Complexity -- log(max) * N 
	int ans = -1;
	while(low <= high)
	{
		int mid = (low + high)/2;
		if(sumofD(arr, mid) <= limit)
		{
			ans = mid;
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return low;
}
