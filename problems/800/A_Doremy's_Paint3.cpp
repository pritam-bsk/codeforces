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
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        if(mp.size() == 1) {yes;}
        else if(mp.size() == 2){
            auto it1 = mp.begin();
            auto it2 = next(it1);
            if(it1->second == it2->second || abs(it1->second - it2->second) == 1) {yes;}
            else {no;}
        }
        else {no;}
    }
    return 0;
}
