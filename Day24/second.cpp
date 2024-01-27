#include<iostream>
#include<climits>
using namespace std;

    int secondlargest(int arr[],int n){
    int largest=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
    int second=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=largest)
        second=max(second,arr[i]);
    };
    return second;
}
int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    cout<<secondlargest(arr,n);
    return 0;
}