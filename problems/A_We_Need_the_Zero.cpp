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
        int xr = 0;
        vector<int> a(n);
        int validSize = 0;
        for (auto &num : a)
        {
            cin >> num;
            xr ^= num;
        }
        if(n%2 == 1){
            cout << xr << endl;
        }else if (n%2 == 0 && xr == 0) cout << xr <<endl;
        else cout << -1 << endl;
    }
    return 0;
}