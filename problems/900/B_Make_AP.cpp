#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";

bool isAP(int a, int b, int c)
{
    return (b - a) == (c - b);
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (!((a + c) % (2 * b)))
        {
            int m = (a + c) / (2 * b);
            if (m > 0 && isAP(a, m * b, c))
            {
                yes;
            }
            else
            {
                no;
            }
        }
        else if (!(((2 * b) - c) % a))
        {
            int m = ((2 * b) - c) / a;
            if (m > 0 && isAP(m * a, b, c))
            {
                yes;
            }
            else
            {
                no;
            }
        }
        else if (!(((2 * b) - a) % c))
        {
            int m = ((2 * b) - a) / c;
            if (m > 0 && isAP(a, b, c * m))
            {
                yes;
            }
            else
            {
                no;
            }
        }else{no;}
    }
    return 0;
}

