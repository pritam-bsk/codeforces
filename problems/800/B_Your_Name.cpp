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
        string s;
        cin >> s;
        string name;
        cin >> name;
        sort(s.begin(),s.end());
        sort(name.begin(),name.end());
        if(s == name){yes;}
        else{no;}
    }
    
    return 0;
}