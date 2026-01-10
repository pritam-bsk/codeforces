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
        vector<int> ids = {-1, -1, -1};
        for (int i{1}; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                ids = {i - 1, i, i + 1};
            }
        }
        if (ids[0] == -1)
        {
            no;
        }
        else
        {
            yes;
            cout << ids[0]+1 << " " << ids[1]+1 << " " << ids[2]+1 << endl;
        }
    }
    return 0;
}