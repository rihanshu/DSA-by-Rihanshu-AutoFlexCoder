// https://www.codingninjas.com/studio/problems/merge-sort_920442?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_14

// Count Inversion : Homework
// https://www.geeksforgeeks.org/inversion-count-in-array-using-merge-sort/

// https://www.geeksforgeeks.org/merge-sort/

#include <iostream>
using namespace std;
// Merging 2 sorted array...
void merge(int *arr, int n, int start, int mid, int end)
{
    int len1 = mid - start + 1;
    int len2 = end - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    int k = start;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k];
        k++;
    }
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k];
        k++;
    }
    int i = 0, j = 0;
    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[start++] = arr1[i++];
        }
        else
        {
            arr[start++] = arr2[j++];
        }
    }
    while (i < len1)
    {
        arr[start++] = arr1[i++];
    }
    while (j < len2)
    {
        arr[start++] = arr2[j++];
    }
    delete[] arr1;
    delete[] arr2;
}

// Breaking dowing the array into smallest part and then merging them.
void mergeSort(int *arr, int n, int start, int end)
{

    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;
    mergeSort(arr, n, start, mid);
    mergeSort(arr, n, mid + 1, end);
    merge(arr, n, start, mid, end);
}
int main()
{
    int n;
    cin >> n;
    int start = 0, end = n - 1;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, n, start, end);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}