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
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        int maxSum = 0; int sum = 0;
        for (auto& ele: a){
            cin >> ele;
            maxSum += ceil((double)ele/x);
            sum += ele;
        }
        cout << (int)ceil((double)sum/x)<< " " << (int)maxSum << endl;
    }
    return 0;
}