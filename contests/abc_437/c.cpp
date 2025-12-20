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
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            int w, p;
            cin >> w >> p;
            a[i].first = w;
            a[i].second = p;
        }
        sort(a.begin(), a.end(), [](pair<int, int> p1, pair<int, int> p2)
             { return p1.first != p2.first ? p1.first < p2.first : p1.second > p2.second; });

        int no_ride = 0;
        pair<int, int> pre = {0, 0};
        for (int i = n - 1; i >= 0; i--)
        {
            a[i].first += pre.first;
            pre = a[i];
        }
        pre = {0,0};
        for (int i = 0; i < n; i++)
        {
            a[i].second += pre.second;
            pre = a[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            if(a[i].second >= a[i+1].first){
                no_ride = n-i-1;
                break;
            }
        }
        cout << no_ride << endl;
        
    }
    return 0;
}