#include<iostream>
using namespace std;
    int showreverse(int n){ 
        int x=n;
    int reverse=0;
    while (x!=0){
        int digit=x%10;
        reverse=reverse*10+digit;
        x=x/10;
    }
        return reverse; }
    
int main(){
    int n=34;
    cout<<showreverse(n);
    return 0;
}