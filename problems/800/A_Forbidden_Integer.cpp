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
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1)
        {
            yes;
            cout << n << endl;
            while (n--)
                cout << 1 << " ";
            cout << endl;
            continue;
        }

        // x==1
        if (k == 1)
        {
            no;
            continue;
        }
        if (n % 2 == 0)
        {
            yes;
            cout << n / 2 << endl;
            for (int i{}; i < n / 2; i++)
                cout << 2 << " ";
            cout << endl;
        }
        else
        {
            if(k < 3){
                no;
                continue;
            }
            yes;
            cout << (n - 3) / 2 + 1 << endl;
            cout << 3 << " ";
            for (int i{}; i < (n-3) / 2; i++)
                cout << 2 << " ";
            cout << endl;
        }
    }
    return 0;
}