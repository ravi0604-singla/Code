int singleNonDuplicate(vector<int>& arr)
{
  I Solution
	// int ans = 0;
	// for(int i = 0; i<arr.size(); i++)
	// {
	// 	ans = ans ^ arr[i];
	// }
	// return ans;
  // IInd Solution
	int n = arr.size();
	if(n == 1) return arr[0];
	for(int i=0; i<arr.size(); i++)
	{
		if(arr[i] != arr[i-1] && arr[i] != arr[i+1])
		return arr[i];
	}
}
