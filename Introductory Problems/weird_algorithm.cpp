#include <bits/stdc++.h>
using namespace std;
int main(){
    uint64_t n;
    cin >> n;
    cout << n;

    while(n != 1.0){
        if(n % 2 == 0.0){
            n = n/2.0;
            cout << " " << n;
        }
        else{n = 3.0*n + 1.0; cout << " " << n;}
    }
}
