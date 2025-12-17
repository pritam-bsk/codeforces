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
        int ans = 0;
        for (int i = 100000; i > 0; i = i / 10)
        {
            ans += n / i;
            if (n / i != 0)
                n = i - 1;
        }
        cout << ans << endl;
    }
    return 0;
}