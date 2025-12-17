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
        vector<int> a(n);
        for(int& num: a) cin >> num;

        bool isThere = false;
        for(int i=0;i<n;i++){
            if(a[i] == k){
                isThere = true;
                break;
            }
        }
        if(isThere){yes;}
        else{no;}
    }
    return 0;
}
