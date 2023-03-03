#include<iostream>
using namespace std;
int search(int arr[], int n, int x)
{
    int i;
    for(i=0; i<n; i++)
    if(arr[i] == x)
       return i;
    //    cout<<i;
    return -1;
}
int main()
{
  int arr[] = {0,1,4,5,10,15};
  int n=sizeof(arr)/sizeof(arr[0]);
  int x = 400;
  int result = search(arr,n,x);
  (result == -1) ? cout<<"Element is not present in the array" : cout<<"Element is present at the index " << result;
  return 0;
}