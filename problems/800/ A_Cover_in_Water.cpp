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
        string str;
        cin >> str;
        int cons = 0;
        int total = 0;
        for (char &c : str)
        {
            if (c == '#')
            {
                cons = 0;
                continue;
            }
            else
            {
                total++;
                cons++;
                if (cons == 3)
                {
                    total = 2;
                    break;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}
