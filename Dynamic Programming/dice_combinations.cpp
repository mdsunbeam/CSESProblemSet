#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    ll CONST = 1e9 + 7;
    scanf("%lld", &n);
    vector<ll> vec(n + 1, 0);
    vec[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= 6 && i - j >= 0; j++)
        {
            (vec[i] += vec[i - j]) %= CONST;
        }
    }
    printf("%lld\n", vec[n]);
}