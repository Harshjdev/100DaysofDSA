#include <iostream>

using namespace std;
void fun(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<=n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}

int main()
{
    int a[6]={1,2,3,6,8,1};
    int n=6;
    fun(a,6);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}