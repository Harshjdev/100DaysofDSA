#include <iostream>

using namespace std;
void fun(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main()
{
    int a[5]={1,2,4,3,8};
    int n=5;
    fun(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}