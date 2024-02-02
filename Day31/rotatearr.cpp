#include<iostream>
#include<vector>
using namespace std;

void fun(vector <int> v,int n){
    int temp[]=v[0];
    for(int i=0; i<n; i++){
        v[i]=v[i+1];
    }
    v[n-1]=temp;
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    
}


int main(){
    vector<int> v={0,8,7,6,5};
    int n=v.size();
    
    fun(v,n);
    
}