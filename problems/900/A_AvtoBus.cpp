#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";

void solve()
{
    int n;
    cin >> n;
    if (n < 4 || n & 1){
        cout << -1 << endl;
        return;
    }
    int max = 0;
    if(n%6 == 0) max = n/6;
    else max = (n/6) + 1;
    int mini = n/4;
    cout << max << " " << mini << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}