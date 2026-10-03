#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int i = s.size() - 1;
        int right=0,left=0;

        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') {
                i--;
            }
            if (i < 0){
                break;
            }
            right = i;
            while (i >= 0 && s[i] != ' ') {
                i--;
            }
            left = i + 1;
            if (!result.empty()) {
                result += ' ';
            }
            result += s.substr(left, right - left + 1);
        }

        return result;
    }
};
