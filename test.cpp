#include <iostream>
#include <math.h>

#include <algorithm>
using namespace std;

int main()
{
    string s = "71345";
    // cin >> s;
    int n = s.length();
    int steps{};

    int left, right;
    left = n - 2;
    right = n - 1;
    cout<<left<<right<<endl;

    while ((right >= 0) && (s[right] != '5' && s[right] != '0'))
    {
        cout << s[right];
        left--;
        right--;
    }
    cout<<left<<right<<endl;
    if (s[right] == '5')
    {
        while (left >= 0 && (s[left] != '2' || s[left] != '7' || s[left] != '0'))
        {
            left--;
        }
        steps = right - left - 1;
        if (s[left] == 0)
        {
            int x = left - 1;
            while (x >= 0 && (s[x] != '2' || s[x] != '5' || s[x] != '7' || s[x] != '0'))
            {
                x--;
            }
            steps = x - left - 1;
        }
    }
    else
    {
        while (left >= 0 && (s[left] != '5' || s[left] != '0'))
        {
            left--;
        }
        steps = right - left - 1;
    }
    cout << steps << endl;
    return 0;
}