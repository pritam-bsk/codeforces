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
        int sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            int x; cin >> x;
            sum += x;
        }
        cout<< -sum << endl;
    }
    return 0;
}
