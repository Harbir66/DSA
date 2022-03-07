// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.

    long long merge(long long arr[], long long l, long long mid, long long r)
    {
        long long lefti = mid - l + 1;
        long long righti = r - mid;
        int arrl[lefti];
        int arrr[righti];

        cout << endl
             << "L ";
        for (long long i = 0; i < lefti; i++)
        {
            arrl[i] = arr[l + i];
            cout << arrl[i] << " ";
        }
        cout << "\t R ";
        for (long long i = 0; i < righti; i++)
        {
            arrr[i] = arr[mid + 1 + i];
            cout << arrr[i] << " ";
        }
        cout << endl;

        long long i = 0, j = 0, k = l;
        // long long help=l;
        long long count = 0;
        while ((i < lefti) && (j < righti))
        {
            if (arrl[i] <= arrr[j])
            {
                arr[k] = arrl[i];
                i++;
                // help++;
            }
            else
            {
                arr[k] = arrr[j];
                j++;
                count = count + (mid + 1 - i);
                cout << mid << " ";
                cout << "\nme " << count << "\n";
            }
            k++;
        }
        while (i < lefti)
        {
            arr[k] = arrl[i];
            i++;
            k++;
        }
        while (j < righti)
        {
            arr[k] = arrr[j];
            j++;
            k++;
        }

        return count;
    }

    long long int mergesort(long long arr[], long long start, long long end)
    {

        long long count = 0;
        if (end > start)
        {
            long long mid = (start + end) / 2;
            count += mergesort(arr, start, mid);
            // cout<<"\n1 "<<count<<"\n";
            count += mergesort(arr, mid + 1, end);
            // cout<<"\n2 "<<count<<"\n";
            count += merge(arr, start, mid, end);
            // cout<<"\nC "<<count<<"\n";
        }
        return count;
    }

    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long count = mergesort(arr, 0, N - 1);
        for (long long i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return count;
    }
};

// { Driver Code Starts.

int main()
{

    long long T;
    // cin >> T;
    T = 1;

    while (T--)
    {
        long long N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}
// } Driver Code Ends