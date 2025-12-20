#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";

// int find(int x,int h,int w)
// {
//     for (int i{}; i < h; i++)
//     {
//         for (int j{}; j < w; j++)
//         {
//             cin >> a[h][w];
//         }
//     }
// }

int32_t main()
{
    fastio;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int h, w, n;
        cin >> h >> w >> n;
        vector<vector<int>> a(h, vector<int>(w));
        for (int i{}; i < h; i++)
        {
            for (int j{}; j < w; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<int> l(h);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (int i{}; i < h; i++)
            {
                for (int j{}; j < w; j++)
                {
                    if (a[i][j] == x)
                        l[i]++;
                }
            }
        }
        cout << *max_element(l.begin(),l.end()) << endl;
        
    }
    return 0;
}