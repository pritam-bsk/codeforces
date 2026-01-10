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
        int n,k;
        cin >> n >> k;
        vector<int> a(n*k);
        for(auto& ele: a){
            cin >> ele;
        }
        int maxi = n - ceil((double)n/2) + 1;
        int mini = n - maxi;
        int sum = 0;
        for(int i = (k*mini); i < k*n ;i += maxi){
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}