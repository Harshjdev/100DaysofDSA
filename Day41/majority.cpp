#include<iostream>
using namespace std;

int majority(int arr[],int n){
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j])
            count++;
            
        }
        if(count > (n/2))
        return arr[i];
    }
    return -1;
}

int main(){
    
    int arr[]={1,2,2,3,2,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<majority(arr,n);
    
    return 0;
}