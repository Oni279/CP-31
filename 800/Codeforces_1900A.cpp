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
        string s;
        cin >> s;
        bool three_empty = false;
        int empty = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                three_empty = true;
                break;
            }
            if (s[i] == '.')
            {
                empty++;
            }
        }
        if (three_empty)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << empty << endl;
        }
    }

    return 0;
}