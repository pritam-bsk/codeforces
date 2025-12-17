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
        for (int &num : a)
            cin >> num;
        if (!(n & 1))
        {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }else{
            cout << 4 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << n-1 << " " << n << endl;
            cout << n-1 << " " << n << endl;
        }
    }
    return 0;
}