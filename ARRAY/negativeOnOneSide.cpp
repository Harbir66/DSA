//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include <bits/stdc++.h>
using namespace std;

int find(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            return i;
    }
    return i;
}

void negativeOnOneSide(int arr[], int n)
{
    int pos, neg;
    pos = find(arr, n);
    neg = pos + 1;
    while (neg < n)
    {
        if (arr[neg] < 0)
        {
            swap(arr[pos], arr[neg]);
            pos++;
            neg++;
        }
        else
        {
            neg++;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    negativeOnOneSide(arr, n);
    print(arr, n);
}