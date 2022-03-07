//https : //www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
//https://www.geeksforgeeks.org/sort-array-0s-1s-2s-simple-counting/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        // coode here
        int low, mid, high;
        low = mid = 0;
        high = n - 1;
        while (mid <= high)
        {
            if (a[mid] == 0)
            {
                swap(a[mid], a[low]);
                low++;
                mid++;
            }
            else if (a[mid] == 2)
            {
                swap(a[mid], a[high]);
                high--;
            }
            else if (a[mid] == 1)
            {
                mid++;
            }
        }
    }
};

// { Driver Code Starts.
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends