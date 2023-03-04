#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Bubble_Sort(int arr[], int n)  //Time Complexity -- O(N2) and Space complexity - O(1)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int arr[] = {10000,0,1,25,4,58,2,36};
    int n = sizeof(arr)/sizeof(arr[0]);
    Bubble_Sort(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}