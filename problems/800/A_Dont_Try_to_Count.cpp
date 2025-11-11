#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int count = 0;
        bool isFound = false;

        for (int i = 0; i < 6; i++)
        {
            if (x.find(s) != string::npos)
            {
                cout << count << endl;
                isFound = true;
                break;
            }
            x += x;
            count++;
        }
        if (!isFound)
            cout << -1 << endl;
    }
    return 0;
}
