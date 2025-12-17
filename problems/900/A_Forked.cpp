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
    int d[4] = {1, -1, 1, -1};
    int e[4] = {-1, 1, 1, -1};
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int xking, yking;
        cin >> xking >> yking;
        int xqueen, yqueen;
        cin >> xqueen >> yqueen;

        set<pair<int, int>> kpos, qpos;
        for (int i = 0; i < 4; i++)
        {
            kpos.insert({xking + d[i] * a, yking + e[i] * b});
            kpos.insert({xking + d[i] * b, yking + e[i] * a});

            qpos.insert({xqueen + d[i] * a, yqueen + e[i] * b});
            qpos.insert({xqueen + d[i] * b, yqueen + e[i] * a});
        }
        int ans{};
        for (auto st : kpos)
        {
            if (qpos.find(st) != qpos.end())
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}