#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverseBits(int n) {
        string binary = bitset<32>(n).to_string();
        reverse(binary.begin(),binary.end());
        int num=stoi(binary,nullptr,2);
        return num;

    }
};
