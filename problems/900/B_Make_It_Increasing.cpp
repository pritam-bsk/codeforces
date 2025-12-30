#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";

int solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& ele: a)
        cin >> ele;
        int ans{};
    for (int i = n-2; i >=0 ;i--)
    {
        while (a[i] >= a[i+1])
        {
            a[i] /= 2;ans++;
            if(a[i] == 0) break;
        }
        if(a[i] == 0 && a[i+1] == 0) return -1;
    }
    return ans;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}