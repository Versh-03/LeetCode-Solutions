#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string result="";
        int index,maxi=0;
        for(int i=0;i<s.size();i++){
            index=result.find(s[i]);
            if(index!= string::npos){
                result.erase(0,index+1);
            }
            result.push_back(s[i]);
            maxi=max((int)result.size(),maxi);
        }
        return maxi;
    }
};
