#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }

        unordered_map<char,char> st;
        unordered_map<char,char> mp;

        for(int i=0;i<s.size();i++){
            if(st.find(s[i])!=st.end() && st[s[i]]!=t[i]){
                return false;
            }
            if(mp.find(t[i])!=mp.end() && mp[t[i]]!=s[i]){
                return false;
            }

            st[s[i]]=t[i];
            mp[t[i]]=s[i];
        }

    return true;

    }
};
