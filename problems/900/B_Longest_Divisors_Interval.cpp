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
        int ans = 1;
        for (int i = 1; i <= n+1; i++)
        {
            if(n%i != 0){
                ans = i-1;
                break;
            }
        }
        cout << ans << endl;
        
    }
    return 0;
}