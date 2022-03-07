//https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

#include <bits/stdc++.h>

using namespace std;

struct pairs
{
    int min, max;

    void MinMax(int arr[], int n)
    {
        if (n == 1)
        {
            max = min = arr[0];
        }
        else if (n == 2)
        {
            max = arr[0] > arr[1] ? arr[0] : arr[1];
            min = arr[0] < arr[1] ? arr[0] : arr[1];
        }
        else
        {
            max = arr[0] > arr[1] ? arr[0] : arr[1];
            min = arr[0] < arr[1] ? arr[0] : arr[1];
            for (int i = 2; i < n; i++)
            {
                if (max < arr[i])
                {
                    max = arr[i];
                }
                if (min > arr[i])
                {
                    min = arr[i];
                }
            }
        }
    }

    pairs MinMaxRec(int arr[], int low, int high)
    {
        pairs minmax, mml, mmr;
        if (low == high)
        {
            minmax.min = minmax.max = arr[low];
            // cout << endl
            //      << minmax.min << " " << minmax.max << " ";
            return minmax;
        }

        else if (high == low + 1)
        {
            minmax.max = arr[low] > arr[low + 1] ? arr[low] : arr[low + 1];
            minmax.min = arr[low] < arr[low + 1] ? arr[low] : arr[low + 1];
            // cout << endl
            //      << minmax.min << " " << minmax.max << " ";
            return minmax;
        }

        int mid = (low + high) / 2;
        mml = MinMaxRec(arr, low, mid);
        mmr = MinMaxRec(arr, mid + 1, high);
        minmax.min = mml.min < mmr.min ? mml.min : mmr.min;
        minmax.max = mml.max > mmr.max ? mml.max : mmr.max;
        // cout << endl
        //      << minmax.min << " " << minmax.max << " ";
        return minmax;
    }
};

int main()
{
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int n = sizeof(arr) / sizeof(arr[0]);

    pairs p;
    p.MinMax(arr, n);
    cout << "MIN : " << p.min << " MAX : " << p.max << " " << endl;

    cout << endl
         << endl
         << " Method 2 " << endl
         << endl;

    pairs p2;
    p2 = p2.MinMaxRec(arr, 0, n - 1);
    cout << "MIN : " << p2.min << " MAX : " << p2.max << " " << endl;
    // for other methods see geekforgeeks link above
}