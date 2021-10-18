#include <bits/stdc++.h>
using namespace std;
int main(){
    uint64_t n, nums, total;
    vector<uint64_t> vec;
    cin >> n;
    
    while(cin >> nums){
        vec.push_back(nums);
    }

    sort(vec.begin(), vec.end());
    total = (n)*(n+1)/2;

    for(uint64_t i = 0; i < vec.size(); i++){
        total -= vec[i];
    }
    
    cout << total << endl;
}