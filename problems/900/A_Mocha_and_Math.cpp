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

        int total_and = a[0];
        for (int i = 1; i < n; i++)
        {
            total_and &= a[i];
        }
        cout << total_and << endl;
    }
    return 0;
}