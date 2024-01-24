#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    map<string,int> directory;
    directory["harsh"]=97736;
    directory["harsh"]=97736;
    
    for(auto element:directory){
        cout<<"Name"<<element.first<<endl;
        cout<<"phone"<<element.second<<endl;
    }
    return 0;
}