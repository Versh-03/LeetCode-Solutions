#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int newCount=0;
        int len=flowerbed.size();
        int left=0;
        int right=0;
        for(int i=0;i<len;i++){
            if(flowerbed[i]==1){
                continue;
            }
            left=(i==0?0:flowerbed[i-1]);
            right=(i==len-1?0:flowerbed[i+1]);

            if(left==0 && right==0){
                flowerbed[i]=1;
                newCount++;
            }
        }
        return newCount>=n;


    }
};
