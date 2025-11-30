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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> mpp;
        for (auto &ch : s){
            mpp[ch]++;
            mpp[ch] %= 2;
        }
        int noOdd = 0;
        for(auto& p: mpp){
            if(p.second == 1) noOdd++;
        }
        noOdd -= k;
        if(noOdd<=1) {yes;}
        else {no;}
        
    }
    return 0;
}