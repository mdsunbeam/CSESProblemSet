#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, temp_num, count{1};
    vector<ll> vec;
    scanf("%lld", &n);
    for (ll i = 0; i < n; i++)
    {
        scanf("%lld", &temp_num);
        vec.push_back(temp_num);
    }
    sort(vec.begin(), vec.end());
    temp_num = vec[0];
    for (ll j = 0; j < vec.size(); j++)
    {
        if (temp_num != vec[j])
        {
            count++;
            temp_num = vec[j];
        }
    }
    printf("%lld\n", count);
}