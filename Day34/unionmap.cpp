#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> unionfun(int a[],int b[], int n, int m){
    map<int,int> mp;
    vector<int> un;
    for(int i=0; i<n; i++){
       mp[a[i]]++;
    }
    for(int i=0; i<m; i++){
        mp[b[i]]++;
}

for( auto it:mp){
    un.push_back(it.first);
    
}
return un;
}
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={2,3,4,5,6};
    
    vector<int> c =unionfun(a,b,5,5);
    
    for( auto it:c){
        cout<<it<<" ";
    }
    
    
}