#include <iostream>
using namespace std;
void zeroneSort(int *arr, int num)
{

    int i = 0;
    int j = num - 1;
    while (i < j)
    {

        while (arr[i] == 0)
        {
            i++;
        }
        while (arr[j] == 1)
        {
            j--;
        }
        if (i < j)
        {

            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
int main()
{

    int *arr, n;
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    zeroneSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}