#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> st;
        for(int x: candyType){
            st.insert(x);
        }
        return min(st.size(), candyType.size() / 2);
    }
};
