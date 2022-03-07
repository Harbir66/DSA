// https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n)
    {

        // Your code here
        int maxf = arr[0];
        int sum = arr[0];
        for (int i = 1; i < n; i++)
        {
            sum = max(arr[i], sum + arr[i]);
            maxf = max(maxf, sum);
        }
        return maxf;
    }
};

// { Driver Code Starts.

int main()
{
    int t, n;

    // cin >> t; //input testcases
    t = 1;
    while (t--) //while testcases exist
    {

        cin >> n; //input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; //inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
// } Driver Code Ends