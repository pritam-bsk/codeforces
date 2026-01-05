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
        int x, n;
        cin >> x >> n;
        int ans;
        if(n == 0){
            cout << x << endl;
            continue;
        }
        if ((x & 1) == 0)
        {
            if ((n & 1) == 0)
            {
                ans = 5 - pow(-1, ((int)((n - 1) / 2))) * (n - 1) - pow(-1, ((int)(n / 2))) * n - 2;
            }
            else
            {
                int p = 0;
                if (((int)(n / 2) & 1) == 0)
                {
                    p = -4;
                }
                ans = 5 - pow(-1, ((int)((n - 1) / 2))) * (n - 1) - pow(-1, ((int)(n / 2))) * n + p;
            }
            ans = (ans / 2) - 1;
            ans = x + ans;
        }
        else
        {
            if ((n & 1) == 0)
            {
                ans = -5 + pow(-1, ((int)((n - 1) / 2))) * (n - 1) + pow(-1, ((int)(n / 2))) * n + 2;
            }
            else
            {
                int p = 0;
                if (((int)(n / 2) & 1) == 0)
                {
                    p = +4;
                }
                ans = -5 + pow(-1, ((int)((n - 1) / 2))) * (n - 1) + pow(-1, ((int)(n / 2))) * n + p;
            }
            ans = (ans/2)+1;
            ans = x + ans;
        }
        cout << ans << endl;
    }
    return 0;
}