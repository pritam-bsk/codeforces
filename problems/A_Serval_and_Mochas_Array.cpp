#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";

bool is_good(vector<int> a, int n)
{
    int g = a[0];
    for (int i{1}; i < n; i++)
    {
        g = gcd(g, a[i]);
    }
    return g <= n;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &num : a)
            cin >> num;

        int idx1{}, idx2{};
        bool is_poss = false;
        for (int i{}; i < n; i++)
        {
            idx1 = i;
            for (int j = i + 1; j < n; j++)
            {
                idx2 = j;
                if (gcd(a[idx1], a[idx2]) <= 2)
                    break;
            }
            if (gcd(a[idx1], a[idx2]) <= 2)
            {
                is_poss = true;
                break;
            }
        }
        if (is_poss)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}