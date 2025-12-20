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
        int n, q;
        cin >> n >> q;
        vector<int> a(n + 1);
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        int sum = a[n];
        for (int i = 0; i < q; i++)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int rem_sum = a[r] - a[l - 1];
            int add_sum = (r - l + 1) * k;
            if (sum - rem_sum + add_sum & 1)
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }
    return 0;
}