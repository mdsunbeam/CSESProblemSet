#include <bits/stdc++.h>
using namespace std;
int main()
{
    uint64_t n;
    cin >> n;
    if (n == 1)
    {
        cout << n;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (uint j = 2; j <= n; j += 2)
        {
            cout << j << " ";
        }
        for (uint i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
}
