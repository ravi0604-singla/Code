bool searchInARotatedSortedArrayII(vector<int>&A, int key) 
{
  int low=0;
  int n = A.size();
  int high = n - 1;
  while(low <= high)
  {
      int mid = low + (high - low)/2;
      if(A[mid] == key) return true;
      if(A[low] == A[mid] && A[mid] == A[high])
      // shrink down the search space
      {
          low = low + 1;
          high = high - 1;
          continue;
      }
      if(A[low] <= A[mid])
      {
          if(A[low] <= key && key <= A[mid])
          {
             high = mid - 1;
          }
          else
          {
              low = mid + 1;
          }
      }
      else
      {
          if(A[mid] <= key && key <= A[high])
          {
              low = mid + 1;
          }
          else
          {
              high = mid - 1;
          }
      }
  }
  return false;
}
