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
        int a,b,c,d; cin >> a >> b >> c >> d;
        // eq: x-y+b-a = 0
        if(c-d+b-a > 0) cout << -1 << endl;
        else if(d < b) cout << -1 << endl;
        else{
            int y_dist = abs(d-b);
            int x_dist = abs(a+d-b-c);
            cout << x_dist + y_dist << endl;
        }
    }
    return 0;
}