#include <iostream>

using namespace std;
void fun(int a[],int n){
    for(int i=1;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a[5]={1,2,3,6,8};
    int n=5;
    fun(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}