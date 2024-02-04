#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> unionfun(int a[],int b[], int n, int m){
    set<int> s;
    vector<int> un;
    for(int i=0; i<n; i++){
        s.insert(a[i]);
    }
    for(int i=0; i<m; i++){
        s.insert(b[i]);
}

for( auto it:s){
    un.push_back(it);
    
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