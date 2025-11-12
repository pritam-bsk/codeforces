#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);

int32_t main()
{
    fastio;
    int n; cin >> n;
    int min_ele = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        min_ele = min(abs(x),min_ele);
    }
    cout << min_ele << endl;

    return 0;
}
