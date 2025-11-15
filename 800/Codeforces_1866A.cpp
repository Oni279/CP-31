#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int minv = INT_MAX;
    for (int i = 0; i < n ; i++)
    {
        minv = min(minv, abs(a[i]));
    }
    cout << minv << endl;
    
    

    return 0;
}