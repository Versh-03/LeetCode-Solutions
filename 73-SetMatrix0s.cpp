#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        bool frow=false; //checking if any element in the row is 0
        bool fcol=false; //checking if any element in the col is 0
        for(int i=0;i<col;i++){
            if(matrix[0][i]==0){
                frow=true;
                break;
            }
        }
        for(int i=0;i<row;i++){
            if(matrix[i][0]==0){
                fcol=true;
                break;
            }
        }

        //Setting marker
        for(int i=1;i<row;i++){ //if [2,3]= 0 then this sets [2,0]=0 and [0,3]=0
            for(int j=1;j<col;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<row;i++){ //turns the marked row into 0
            if(matrix[i][0]==0){
                for(int j=1;j<col;j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int j=1;j<col;j++){ //turns the marked col into 0
            if(matrix[0][j]==0){
                for(int i=1;i<row;i++){
                    matrix[i][j]=0;
                }
            }
        }
        if(frow){ //changing the first row
            for(int j=0;j<col;j++){
                matrix[0][j]=0;
            }
        }
        if(fcol){ //changing the first col
            for(int i=0;i<row;i++){
                matrix[i][0]=0;
            }
        }
    }
};
