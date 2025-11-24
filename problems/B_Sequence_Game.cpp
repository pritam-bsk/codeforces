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
        vector<int> b(n);
        for(auto& num: b) cin >> num;
        vector<int> a;
        a.push_back(b[0]);
        for (int i = 1; i < n; i++)
        {
            if(b[i] >= b[i-1]){
                a.push_back(b[i]);
                continue;
            }
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
        cout << a.size() << endl;
        for(auto& num: a) cout << num << " ";
        cout << endl;
    }
    return 0;
}
