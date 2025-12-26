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
        vector<int> a(n);
        for (auto &ele : a)
            cin >> ele;
        int l = 0, r = n - 1;
        int ans = 1;
        while (l < n && a[l] == 0)
            l++;
        while (r > 0 && a[r] == 0)
            r--;
        if (l == n)
            ans = 0;
        bool isTherZero = false;
        for (int i = l; i <= r; i++)
        {
            if (a[i] == 0)
                isTherZero = true;
        }
        if (ans == 1)
        {
            if (isTherZero)
                ans = 2;
        }
        cout << ans << endl;
    }
    return 0;
}