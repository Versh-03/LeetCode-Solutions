#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest="";
        for(int i=0;i<strs[0].size();i++){
            for(int j=0;j<strs.size();j++){
                if(i>=strs[j].size()||strs[j][i]!=strs[0][i]){
                    return longest;
                }
            }
            longest+=strs[0][i];
        }
        return longest;
    }
};
