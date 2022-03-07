#include <bits/stdc++.h>

using namespace std;

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void revarr(int arr[], int n)
{

    int start = 0, end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
    printarr(arr, n);
}

void revarrREC(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    else
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        revarrREC(arr, ++start, --end);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    //revarr(arr, n);
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "recursive method" << endl;
    revarrREC(arr1, 0, n - 1);
    printarr(arr1, n);
}

// IN Python there is method of list slicing {example : arr[::-1]}