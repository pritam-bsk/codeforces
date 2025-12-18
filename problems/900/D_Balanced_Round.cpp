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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &ele : a)
            cin >> ele;
        sort(a.begin(), a.end());
        int start{}, end{};
        int lLen{1};
        for (int i{1}; i < n; i++)
        {
            if (a[i] - a[i - 1] <= k)
            {
                end = i;
            }
            else
            {
                start = end = i;
            }
            lLen = max(end-start+1,lLen);
        }
        cout << n-lLen << endl;
    }
    return 0;
}