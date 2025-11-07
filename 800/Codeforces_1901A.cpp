#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        long long arr[100005];
        arr[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        arr[n+1] = x;
        n = n+2;
        long long max_gap = LLONG_MIN;
        for (int i = 1; i < n; i++)
        {
            if(i == n-1)
            { 
                max_gap = max(max_gap, 2 * (arr[i] - arr[i-1]));
            }
            else 
            {
                max_gap = max(max_gap, arr[i] - arr[i-1]);
            }
        }
        
        cout << max_gap << endl;
    }

    return 0;
}