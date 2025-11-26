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
        string s;
        cin >> s;
        int start = 0, end = n - 1;
        while ((s[start] == '0' && s[end] == '1') ||
               (s[start] == '1' && s[end] == '0'))
        {
            if (start > end)
                break;
            start++;
            end--;
        }
        cout << end - start + 1 << endl;
    }
    return 0;
}