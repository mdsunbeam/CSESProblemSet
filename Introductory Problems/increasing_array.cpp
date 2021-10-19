#include <bits/stdc++.h>
using namespace std;
int main()
{
    uint64_t n, x;
    uint64_t diff = 0;
    vector<uint64_t> vec;
    cin >> n;
    while (cin >> x)
    {
        vec.push_back(x);
    }
    for (uint64_t i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] > vec[i + 1])
        {
            diff += vec[i] - vec[i + 1];
            vec[i + 1] = vec[i];
        }
    }
    cout << diff << endl;
}