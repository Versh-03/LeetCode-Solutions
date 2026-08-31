#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        string binary= bitset<32>(n).to_string();
        for(char x: binary){
            if(x=='1'){
                count++;
            }
        }
        return count;

    }
};
