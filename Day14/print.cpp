#include<iostream>
using namespace std;
vector<int> printNos(int x) {
    // Write Your Code Here
    if(x==0){
        vector<int> ans;
        return ans;
    }
    vector<int> ans=printNos(x-1);
    {
        ans.push_back(x);
        return ans;
    }
} 