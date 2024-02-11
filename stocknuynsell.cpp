#include<iostream>
#include<climits>
using namespace std;

int buynstock(int prices[], int n){
    int maxi=0;
    int cp=INT_MAX;
    for(int i=0; i<n; i++){
        if(cp<prices[i]){
        int profit=prices[i]-cp;
        maxi=max(maxi,profit);
        }
        else
        cp=prices[i];
    }
    return maxi;
}

int main(){
    int prices[]={5,4,3,2,1};
    int n=sizeof(prices)/sizeof(prices[0]);
    cout<<buynstock(prices,n)<<endl;
    return 0;
}