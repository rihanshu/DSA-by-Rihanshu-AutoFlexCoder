

// C++ program to find first and last occurrences of
// a number in a given sorted array
#include <bits/stdc++.h>
using namespace std;
 
/* if x is present in arr[] then returns the index of
   FIRST occurrence of x in arr[0..n-1], otherwise
   returns -1 */
int first(int arr[], int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        else
            return first(arr, low, (mid - 1), x, n);
    }
    return -1;
}
 
/* if x is present in arr[] then returns the index of
   LAST occurrence of x in arr[0..n-1], otherwise
   returns -1 */
int last(int arr[], int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == n - 1 || x < arr[mid + 1])
            && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, low, (mid - 1), x, n);
        else
            return last(arr, (mid + 1), high, x, n);
    }
    return -1;
}
 
// Driver program
int main()
{
    int arr[] = { 0 ,0, 1, 1, 2, 2, 2, 2};
    int n = sizeof(arr) / sizeof(int);
 
    int x = 2;
    printf("First Occurrence = %d\t",
           first(arr, 0, n - 1, x, n));
    printf("\nLast Occurrence = %d\n",
           last(arr, 0, n - 1, x, n));
    return 0;
}
 
// This code is contributed by Sania Kumari Gupta
// (kriSania804)


int findpeak(vector<int>& arr , int start , int end){
        if(start>end){
            return -1;
        }
        int mid = start+(end-start)/2;
        if(mid-1>=0 && mid+1<arr.size() && arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1] ){
            // start=mid+1;
            return findpeak(arr,mid,end);

        }
        else if(mid-1>=0 && mid+1<arr.size() && arr[mid]>arr[mid+1] && arr[mid]<arr[mid-1]){
            // end=mid-1;
            return findpeak(arr,start,mid);
        }
        else{
            return mid;
        }

    }