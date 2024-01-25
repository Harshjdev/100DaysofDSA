#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string> record;
    //rollnumber and name
    record.insert(make_pair(1,"harsh"));
    record[2]="hunny";
    
    for(auto pair:record){
        cout<<"roll"<<pair.first<<endl;
        cout<<"name"<<pair.second<<endl;
    }
    return 0;
    
}
