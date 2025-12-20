#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define int long long

int32_t main()
{
    fastio;
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &ele : a)
        cin >> ele;
    vector<int> b(m);
    for (auto &ele : b)
        cin >> ele;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x = 0;
            x = abs(a[i] - b[j]) % 998244353;
            sum = sum % 998244353;
            sum = sum + x;
        }
    }
    cout << sum % 998244353 << endl;

    return 0;
}