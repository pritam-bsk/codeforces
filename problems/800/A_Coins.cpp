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
        int n, k; cin >> n >> k;
        if(n%2 == 0 || k == 1) {yes;}
        else{
            if(k%2 == 0){no;}
            else {yes;}
        }
    }
    return 0;
}