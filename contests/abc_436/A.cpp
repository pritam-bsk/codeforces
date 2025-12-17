#include<iostream>
#include<string>
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
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        while (s.length() < n)
        {
            s = 'o' + s;
        }
        cout<<s<<endl;
    }
    return 0;
}