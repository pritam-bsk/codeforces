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
        int mini = INT_MAX;
        for (int i{}; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] < mini)
            {
                if (mini < 0)
                {
                    break;
                }
                mini = a[i + 1] - a[i];
            }
        }
        if (mini < 0)
            cout << 0 << endl;
        else if (mini % 2)
            cout << (mini + 1) / 2 << endl;
        else
            cout << (mini + 2) / 2 << endl;
    }
    return 0;
}