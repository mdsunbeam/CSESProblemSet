#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, t_sum, sum;
    scanf("%lld", &n);
    t_sum = n * (n+1)/2;
    sum = t_sum / 2;
    if(t_sum % 2 == 1){
        printf("NO");
    }
    else{
        printf("YES\n");
        printf("%lld\n", n/4);
        for(ll i = 1; i <=n; i = i+4){
            printf("%lld ", i);
            printf("%lld ", i+3);
        }
    }
}