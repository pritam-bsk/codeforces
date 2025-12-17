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
        int n; cin >> n;
        if(n%2)cout << 0 << endl;
        else{
            int max_chick = n/2;
            if(max_chick == 1) cout << 1 << endl;
            else{
                (max_chick%2 == 0) ?
                    cout << (max_chick+2)/2 << endl
                    : cout << (max_chick+1)/2 << endl;
            }
        }
    }
    return 0;
}