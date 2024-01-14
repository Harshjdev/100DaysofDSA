#include<iostream>
using namespace std;
int calcGCD(int n, int m){
        int div =1;
        for (int i =1;i<=min(n,m);i++){
            if ((n%i==0) && (m%i == 0)){
                div =  i;
            }
        }
        return div;
    }

