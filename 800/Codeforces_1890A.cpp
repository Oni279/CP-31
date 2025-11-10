#include <bits/stdc++.h>
using namespace std;

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
        int v1 = -1, v2 = -1;
        int f1 = 0, f2 = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int x = a[i];
            if (v1 == -1 || x == v1)
            {
                v1 = x;
                f1++;
            }
            else if (v2 == -1 || x == v2)
            {
                v2 = x;
                f2++;
            }
            else
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else if (v2 == -1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (f1 == f2)
            {
                cout << "YES" << endl;
            }
            else if (n % 2 == 1 && abs(f1 - f2) == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}