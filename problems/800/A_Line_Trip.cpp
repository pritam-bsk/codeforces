#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define int long long

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int> stations(n);
        for(int& station: stations) cin >> station;
        int dist = 0;
        int pre_st = 0;
        for(int& station: stations){
            dist = max(dist, station-pre_st);
            pre_st = station;
        }
        dist = max(dist,2*(x-pre_st));
        cout << dist << endl;
    }
    return 0;
}
