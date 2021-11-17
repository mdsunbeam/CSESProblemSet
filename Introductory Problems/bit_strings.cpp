#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, result{1};
    scanf("%lld", &n);
    ll CONST = pow(10, 9) + 7;
    for (ll i = 0; i < n; i++)
    {
        result *= 2;
        result = result % CONST;
    }
    printf("%lld\n", result);
}