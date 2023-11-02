#include <iostream>
using namespace std;

int merge(int *arr, int n, int mid, int start, int end)
{
    int len1 = mid - start + 1;
    int len2 = end - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    int k = start;
    int count = 0;

    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k++];
    }

    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k++];
    }
    int i = 0, j = 0;

    while (i < len1 && j < len2)
    {
        if (arr1[i] > arr2[j])
        {
            arr[start++] = arr2[j++];
            count = count + len1 - i;
        }
        else
        {
            arr[start++] = arr1[i++];
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
    return count;
}
int mergeSort(int *arr, int n, int start, int end)
{
    int count = 0;
    if (start >= end)
    {
        return 0;
    }
    int mid = start + (end - start) / 2;
    count += mergeSort(arr, n, start, mid);
    count += mergeSort(arr, n, mid + 1, end);
    count += merge(arr, n, mid, start, end);
    return count;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = n - 1;
    cout << mergeSort(arr, n, start, end) << endl;
    return 0;
}
