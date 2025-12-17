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
        int n, a, b;
        cin >> n >> a >> b;
        if(n == a && a== b){
            yes;
        }
        else if (n - (a + b) <= 1)
        {
            no;
        }
        else
        {
            yes;
        }
    }
    return 0;
}