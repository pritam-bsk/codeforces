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
        sort(a.begin(),a.end());
        int maxi = 1;
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if(a[i] == a[i-1]) cnt++;
            else cnt = 1;
            maxi = max(maxi,cnt);
        }

        int ans = 0;
        while (maxi < n)
        {
            ans++;
            int x = min(maxi, n - maxi);
            ans += x;
            maxi += x;
        }
        cout << ans << endl;
    }
    return 0;
}