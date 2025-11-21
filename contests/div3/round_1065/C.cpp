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
        vector<int> a(n), b(n);
        int axor = 0, mxor = 0;
        for (auto &num : a)
        {
            cin >> num;
            axor ^= num;
        }
        for (auto &num : b)
        {
            cin >> num;
            mxor ^= num;
        }
        
    }
    return 0;
}