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
        int a, b, n;
        cin >> a >> b >> n;
        int sum = b;
        for (int i{};i<n;i++){
            int num;
            cin >> num;
            if(num+1 > a) num = a-1;
            sum += num;
        }
        cout << sum << endl;
    }
    return 0;
}