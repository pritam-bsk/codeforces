#include<iostream>
#include<vector>

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
        int n; cin >> n;
        int r = 0, c = (n-1)/2;
        int k =1;
        vector<vector<int>> a(n,vector<int>(n,0));
        a[r][c] = k;
        k = k+1;
        for(int i{};i<(n*n-1);i++){
            if(a[(r-1+n)%n][(c+1+n)%n] == 0){
                a[(r-1+n)%n][(c+1+n)%n] = k;
                k+=1;
                r=(r-1+n)%n;
                c=(c+1+n)%n;
            }
            else{
                a[(r+1+n)%n][c] = k;
                k+=1;
                r=(r+1+n)%n;
            }
        }
        for(int i{};i<n;i++){
            for(int j{};j<n;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    
    }

    
    return 0;
}