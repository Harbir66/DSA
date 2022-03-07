#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {2, 14, 8, 22, 2, 34, 22, 6, 6, 14, 8};
    int n = sizeof(a) / sizeof(a[0]);
    int i = 0;
    int res = a[0];
    for (i = 1; i < n; i++)
        res = res ^ a[i];

    cout << res;
}