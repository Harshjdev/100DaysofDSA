//mvoe zeros to the end of array
#include<iostream>
using namespace std;

void movezero(int arr[],int n){
    int k=0; //k=index of temp
    int temp[n];
    //move zero to end of temp
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            temp[n-1-i]=arr[i];
            
        }   
    }
    //move non zero element to the begin of temp
    for( int i=0; i<n; i++){
        if(arr[i]!=0){
            temp[k++]=arr[i];
        }
    }
    //move temp array to org
    for(int i=0; i<n; i++){
        arr[i]=temp[i];
    }
    
}
int main(){
     int arr[] = {1, 2, 0, 3, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    movezero(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}