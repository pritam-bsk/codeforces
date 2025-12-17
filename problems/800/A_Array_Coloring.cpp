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
        int n_odd{},n_even{};
        for(int i{};i<n;i++){
            int x; cin >> x;
            (x%2==0) ? n_even++ : n_odd++;
        }
        if(n_odd%2 == 0) {yes;}
        else {no;}
    }
    return 0;
}
