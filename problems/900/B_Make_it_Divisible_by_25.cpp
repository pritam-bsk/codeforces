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
        string s;
        cin >> s;
        int n = s.length();
        int steps{};

        int left, right;
        left = n - 2;
        right = n - 1;
        int m = 0;
        while (right >= 0 && (s[right] != '5' && s[right] != '0'))
        {
            left--;
            right--;
            m++;
        }
        if (s[right] == '5')
        {
            while (left >= 0 && (s[left] != '2' && s[left] != '7' && s[left] != '0'))
            {
                left--;
            }
            steps = right - left - 1;
            if (s[left] == '0')
            {
                int x = left - 1;
                while (x >= 0 && (s[x] != '2' && s[x] != '5' && s[x] != '7' && s[x] != '0'))
                {
                    x--;
                }
                steps = right - x - 1;
            }
        }
        else
        {
            while (left >= 0 && (s[left] != '5' && s[left] != '0'))
            {
                left--;
            }
            steps = right - left - 1;
        }
        cout << m+steps << endl;
    }
    return 0;
}