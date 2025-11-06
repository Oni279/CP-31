#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n];
        long long copy_a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            copy_a[i] = a[i];
        }
        sort(copy_a, copy_a + n);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != copy_a[i])
            {
                flag = false;
                break;
            }
            
        }
        if(flag || k > 1) cout << "YES" <<endl;
        else cout << "NO" << endl;

    }
    


    return 0;
}