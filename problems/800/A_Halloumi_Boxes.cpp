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
        int n{}, k{};
        cin >> n >> k;
        vector<int> boxes(n);
        for (int &x : boxes) cin >> x;
        vector<int> sorted_boxes = boxes;
        sort(sorted_boxes.begin(),sorted_boxes.end());
        if(k == 1){
            if(boxes == sorted_boxes) { yes; }
            else { no; }
        }else { yes; }
    }
    return 0;
}
