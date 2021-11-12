#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k, ans;
    scanf("%lld", &k);
    for (ll i = 1; i <= k; i++)
    {
        ans = (i * i * (i * i - 1)) / 2 - 8 * (i - 1) * (i - 2) / 2;
        printf("%lld\n", ans);
    }
}