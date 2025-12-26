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
        for (auto& ele: a)
            cin >> ele;
        int parity = a[0]%2;
        bool isSame = true;
        for (int i = 1; i < n; i++)
        {
            if(a[i]%2 != parity) isSame = false;
        }
        if(!isSame){
            sort(a.begin(),a.end());
        }
        for(auto& ele: a){
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}