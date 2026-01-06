#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";

int reduced_len(string s)
{
    int n = s.length();
    if (n <= 1)
        return n;
    int len = 1;
    int i = 1;
    while (i < n)
    {
        if (s[i - 1] != s[i])
        {
            len++;
        }
        i++;
    }
    return len;
}

int findlen(string s)
{
    int n = s.length();
    int len = 1;
    int i = 1;
    while (i < n)
    {
        if (s[i - 1] != s[i])
        {
            break;
        }
        len++;
        i++;
    }
    return len;
}

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
        int red_len = reduced_len(s);
        if ((red_len & 1) == 1)
        {
            cout << s << endl;
        }
        else
        {
            string rev = s;
            reverse(rev.begin(), rev.end());
            int firstlen = findlen(s), lastlen = findlen(rev);
            if (firstlen > 1)
            {
                s[0] = (s[0] == 'a') ? 'b' : 'a';
            }
            else if (lastlen > 1)
            {
                s[n - 1] = (s[n - 1] == 'a') ? 'b' : 'a';
            }
            else
            {
                s[0] = (s[0] == 'a') ? 'b' : 'a';
            }
            cout << s << endl;
        }
    }
    return 0;
}