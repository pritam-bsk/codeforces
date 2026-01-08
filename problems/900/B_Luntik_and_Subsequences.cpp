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
        for (auto& ele: a)
            cin >> ele;
        int zeros{},ones{};
        for(auto& ele:a){
            if(ele == 0) zeros++;
            else if(ele == 1) ones++;
        }
        int ways = (1LL << zeros)*ones;
        cout << ways << endl;
    }
    return 0;
}