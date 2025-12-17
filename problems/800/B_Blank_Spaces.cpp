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
        int len{}, maxLen{};
        for (auto &num : a)
        {
            cin >> num;
            if (num == 0)
                len++;
            else{
                len = 0;
            }
            maxLen = max(maxLen,len);
        }
        cout << maxLen << endl;
    }
    return 0;
}