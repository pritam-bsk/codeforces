#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int no_2 = 0;
        for (auto &num : a)
        {
            cin >> num;
            if (num == 2)
                no_2++;
        }
        if (no_2 % 2)
            cout << -1 << endl;
        else
        {
            int copy = 0;
            int k = -1;
            for (int i{}; i < n; i++)
            {
                if (a[i] == 2)
                    copy++;
                if (copy == (no_2 / 2))
                {
                    k = i + 1;
                    break;
                }
            }
            cout << k << endl;
        }
    }
    return 0;
}