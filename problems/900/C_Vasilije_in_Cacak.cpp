#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";

int sum(int k){
    return (k*(k+1))/2;
}

int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        int min_sum = sum(k);
        int total_sum = sum(n);
        int max_sum = total_sum-sum(n-k);
        if(min_sum <= x && x <= max_sum){yes;}
        else {no;}
    }
    return 0;
}