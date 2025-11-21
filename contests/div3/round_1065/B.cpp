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
        int n; cin >> n;
        vector<int> a(n);
        for(auto& num:a) cin >> num;
        int sum = 0;
        for(int i{1};i<n-1;i++){
            if(a[i] == -1) a[i] = 0;
        }
        if(a[0] == -1 && a[n-1] == -1){
            a[0] = a[n-1] = 0;
        }else if(a[n-1] == -1){
            a[n-1] = a[0];
        }else if(a[0] == -1){
            a[0] = a[n-1];
        }
        cout << abs(a[n-1]-a[0]) << endl;
        for(auto& num: a) cout << num << " ";
        cout << endl;
    }
    return 0;
}