// #include<iostream>
// using namespace std;
// int binary_search(int arr[], int beg, int end, int x)
// {
//    int middle = (beg + end)/2;
//    if(arr[middle] == x)
//    return middle;
//    else if(arr[middle] < x)
//    return binary_search(arr, middle+1, end, x);
//    else if(arr[middle] > x)
//    return binary_search(arr, beg, middle-1, x);
//    else
//    return -1;
// }
// int main(void)
// {
//     int arr[] = {10, 20, 50, 180, 200};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 450;
//     int result = binary_search(arr, 0, n-1, x);
//     (result == -1) ? cout <<"Element is not present in the sorted array" : cout<<"Element is present at the index " << result;
//     return 0;
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
       if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
     return -1;
}
 
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 1000;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array": cout << "Element is present at index " << result;
    return 0;
}