// https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        //code here
        int count = 0;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(a[i]==b[j]){
        //             count++;
        //         }
        //     }
        // }
        //cout<<count<<"y ";

        set<int> s1;
        // s1.insert(a);
        for (int i = 0; i < n; i++)
        {
            s1.insert(a[i]);
        }
        set<int> s2;
        for (int i = 0; i < m; i++)
        {
            s1.insert(b[i]);
        }
        // s2.insert(b);
        // set<int> :: iterator i;
        // set<int> :: iterator j;
        // for(i=s1.begin();i != s1.end();i++){
        //     for(j=s2.begin();j != s2.end();j++){
        //         if(*i==*j){
        //             count++;
        //         }
        //     }
        // }
        return (s1.size());
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        int a[n], b[m];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;
    }

    return 0;
} // } Driver Code Ends