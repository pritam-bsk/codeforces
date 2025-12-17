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
        for (auto &num : a)
            cin >> num;
        int ans{};
        for (int i = 0; i < n - 1; i++)
        {
            if ((a[i] & 1) == (a[i + 1] & 1))
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}