//Not Optimised- Manacher's Algorithm

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int bestLeft = 0;
        int bestRight = 0;

        for (int i = 0; i < s.size(); i++) {
            int left = i;
            int right = i;
            while (left >= 0 && right < s.size() &&
                   s[left] == s[right]) {
                if (right - left > bestRight - bestLeft) {
                    bestLeft = left;
                    bestRight = right;
                }
                left--;
                right++;
            }

            left = i;
            right = i + 1;
            while (left >= 0 && right < s.size() &&
                   s[left] == s[right]) {
                if (right - left > bestRight - bestLeft) {
                    bestLeft = left;
                    bestRight = right;
                }
                left--;
                right++;
            }
        }

        return s.substr(bestLeft, bestRight - bestLeft + 1);
    }
};
