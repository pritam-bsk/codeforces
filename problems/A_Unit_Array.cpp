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
        int neg{}, pos{};
        for (int i{}; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == -1)
                neg++;
            else
                pos++;
        }
        int ops{};
        while (pos < neg)
        {
            ops++;
            pos++;
            neg--;
        }
        if (neg % 2)
        {
            ops++;
            pos++;
            neg--;
        }
        cout << ops << endl;
    }
    return 0;
}