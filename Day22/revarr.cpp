// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     int start=0,end=5;
    
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     };
//     for( int i=0; i<6; i++){
//         cout<<arr[i];
//     }}
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter range";
    cin>>n;
    int a[n];
    cout<<"enter array values";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\norg array";
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<"\nrev array:";
    // one way
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
}