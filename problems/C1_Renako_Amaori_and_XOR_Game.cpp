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
        int ajisai{}, mai{};
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &num : a)
        {
            cin >> num;
            ajisai ^= num;
        }
        for (auto &num : b)
        {
            cin >> num;
            mai ^= num;
        }
        if (ajisai == mai)
        {
            cout << "Tie" << endl;
        }
        else
        {
            int last = n;
            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] != b[i])
                {
                    last = i;
                    break;
                }
            }
            if (last % 2 == 0)
                cout << "Ajisai" << endl;
            else
                cout << "Mai" << endl;
        }
    }
    return 0;
}