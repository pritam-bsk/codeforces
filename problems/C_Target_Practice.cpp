#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t))
        return 0;
    const int val[10] = {1,2,3,4,5,5,4,3,2,1};
    while (t--)
    {
        int sum = 0;
        for (int i = 0; i < 10; ++i)
        {
            for (int j = 0; j < 10; ++j)
            {
                char ch;
                cin >> ch;
                if (ch == 'X')
                    sum += min(val[i], val[j]);
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
