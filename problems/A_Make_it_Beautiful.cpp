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
        sort(a.begin(), a.end());
        if (a[0] == a[n - 1])
        {
            no;
        }
        else
        {
            yes;
            cout << a[n - 1] << " ";
            for (int i{0}; i < n - 1; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
    return 0;
}