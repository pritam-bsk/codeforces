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
        string s;
        int n;
        cin >> n;
        cin >> s;
        char pre_ch = s[0];
        int maxLen = 1;
        int len = 1;
        for (int i{1}; i < n; i++)
        {
            if (s[i] == pre_ch)
                len++;
            else
                len = 1;
            pre_ch = s[i];
            maxLen = max(maxLen, len);
        }
        cout << maxLen + 1 << endl;
    }
    return 0;
}