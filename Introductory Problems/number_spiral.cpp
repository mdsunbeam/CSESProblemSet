#include <bits/stdc++.h>

using namespace std;
int main()
{
    uint64_t t, num, y, x;
    cin >> t;
    for (uint64_t i = 0; i < t; i++)
    {
        cin >> y >> x;
        num = 0;
        if (x == y)
        {
            num = x * x - (x - 1);
        }
        if (y > x)
        {
            if (y % 2 == 0)
            {
                num = (y * y - (y - 1)) + (y - x);
            }
            else
            {
                num = (y * y - (y - 1)) - (y - x);
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                num = (x * x - (x - 1)) - (x - y);
            }
            else
            {
                num = (x * x - (x - 1)) + (x - y);
            }
        }
        cout << num << endl;
    }
}