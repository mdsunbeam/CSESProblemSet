#include <bits/stdc++.h>
using namespace std;
int main()
{

    uint64_t n{0}, k, tdiff, sdiff{16}, fdiff{6}, num{28}, k1{0}, k2{6}, k3{28};
    scanf("%d", &k);
    if (k == 1)
    {
        printf("%d\n", k1);
    }
    if (k == 2)
    {
        printf("%d\n", k1);
        printf("%d\n", k2);
    }
    if (k == 3)
    {
        printf("%d\n", k1);
        printf("%d\n", k2);
        printf("%d\n", k3);
    }
    else
    {
        printf("%d\n", k1);
        printf("%d\n", k2);
        printf("%d\n", k3);
        for (uint64_t i = 0; i < k - 3; i++)
        {
            tdiff = 30 + 12 * i;
            sdiff = sdiff + tdiff;
            fdiff = fdiff + sdiff;
            num = num + (fdiff + 16);
            printf("%lld\n", num);
        }
    }
}