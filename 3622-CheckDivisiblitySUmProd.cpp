#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int rem,sum=0,prod=1;
        while(n!=0){
            rem=n%10;
            prod*=rem;
            sum+=rem;
            n/=10;
        }
        return temp%(prod+sum)==0;

    }
};
