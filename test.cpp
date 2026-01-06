#include <iostream>
#include <math.h>

#include <algorithm>
using namespace std;

int reduced_len(string s)
{
    if (s.length() <= 1)
        return s.length();
    int len = 1;
    int i = 1;
    while (i < s.length())
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
    int len = 1;
    int i = 1;
    while (i < s.length())
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

int main()
{
    string s;
    cin >> s;
    string rev;
    rev = s;
    reverse(rev.begin(), rev.end());

    cout << findlen("bbba") << endl;
    cout << rev << endl;
}