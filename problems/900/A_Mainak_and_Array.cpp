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
        int maxi = *max_element(a.begin(), a.end());
        int mini = *min_element(a.begin(), a.end());

        int ans = a[n-1] - a[0];
        for (int i = 0; i < n; i++) {
            ans = max(ans, a[i] - a[(i + 1) % n]);
        }
        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i] - a[0]);
        }
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, a[n - 1] - a[i]);
        }
        
        cout << ans << endl;
    }
    return 0;
}