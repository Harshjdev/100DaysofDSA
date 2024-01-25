#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    map<string,int> directory;
    directory["hunny"]=97736;
    directory["hunny"]=97736;
    
    for(auto element:directory){
        cout<<"Name"<<element.first<<endl;
        cout<<"phone"<<element.second<<endl;
    }
    return 0;
}