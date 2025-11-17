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
        int x, k;
        cin >> x >> k;
        if (x % k != 0)
        {
            cout << 1 << endl;
            cout << x << endl;
        }else{
            cout << 2 << endl;
            cout << x-1 << " " << 1 << endl;
        }
    }
    return 0;
}