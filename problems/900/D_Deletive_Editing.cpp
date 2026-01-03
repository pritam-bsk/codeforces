#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";

bool solve(){
    string s,t;
    cin >> s >> t;
    int m{s.size()},n{t.size()} ;
    unordered_map<char,int> mp;
    for(char& c: t){
        mp[c]++;
    }
    for(int i = m-1;i >= 0;i--){
        if(mp[s[i]] == 0){
            s[i] = '.';
        }else{
            mp[s[i]]--;
        }
    }
    string str_formed = "";
    for (int i = 0; i < m; i++)
    {
        if(s[i] != '.') str_formed += s[i];
    }
    return str_formed == t;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        if(solve()){
            yes;
        }else{
            no;
        }
    }
    return 0;
}