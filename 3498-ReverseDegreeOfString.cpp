#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverseDegree(string s) {
        int result=0;
        for(int i=0;i<s.size();i++){
            result+=(('z'-s[i])+1)*(i+1);
        }
        return result;

    }
};
