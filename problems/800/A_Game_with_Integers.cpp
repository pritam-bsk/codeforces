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
        if (n % 3 == 0)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "First" << endl;
        }
    }
    return 0;
}
