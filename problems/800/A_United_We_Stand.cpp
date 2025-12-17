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
        int n; cin >> n;
        vector<int> a(n);
        for(auto& num : a) cin >> num;
        int mx = *max_element(a.begin(),a.end());

        vector<int> b,c;
        for(auto& num: a){
            if(num == mx) c.push_back(num);
            else b.push_back(num);
        }

        if(b.size() == 0) cout << -1 <<endl;
        else{
            cout << b.size() << " " << c.size() << endl;
            for(auto& num: b) cout << num << " ";
            cout << endl;
            for(auto& num: c) cout << num << " ";
            cout << endl;
        }
    }
    return 0;
}