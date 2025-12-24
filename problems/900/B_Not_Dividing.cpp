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
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &ele : a)
            cin >> ele;
        for (int i = 0; i < n - 1; i++)
        {
            a[i] += (a[i] == 1);
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] % a[i] == 0)
            {
                a[i + 1]++;
            }
        }
        for (auto &ele : a)
            cout << ele << " ";
        cout << endl;
    }
    return 0;
}