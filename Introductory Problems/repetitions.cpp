#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    uint64_t cur_rep, max_rep;
    cin >> str;
    cur_rep = max_rep = 1;
    for (uint64_t i = 0; i < str.size(); i++)
    {
        if (str[i] == str[i + 1])
        {
            cur_rep++;
        }
        else
        {
            cur_rep = 1;
        }
        max_rep = max(cur_rep, max_rep);
    }

    cout << max_rep << endl;
}