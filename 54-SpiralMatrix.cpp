#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};
        vector<int> result;
        int first=0;
        int last=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        while(first<=last && left<=right){
            for(int j=left;j<=right;j++){
                result.push_back(matrix[first][j]);
            }
            first++;
            if(first>last) break;
            for(int i=first;i<=last;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            if(left>right) break;
            for(int j=right;j>=left;j--){
                result.push_back(matrix[last][j]);
            }
            last--;
            for(int i=last;i>=first;i--){
                result.push_back(matrix[i][left]);
            }
            left++;
        }
        return result;


    }
};
