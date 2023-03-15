#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    // Approach 1 taking extra space 
    int temp[d];
    d = d%n;
    for(int i=0; i<d; i++)
    {
        temp[i] = arr[i];
    }
    for(int i=d; i<n; i++)
    {
        arr[i-d] = arr[i];
    }
    for(int i = n-d; i<n; i++)
    {
        arr[i] = temp[i-(n-d)];
    }
  // Approach 2 taking no auxilliary space
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n); // not using extra space
}
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftRotate(arr,n,d);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
