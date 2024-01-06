#include <iostream>
using namespace std;
void nStarTriangle(int n) {
    // Write your code here.
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*i-2; j++){
            cout<<" ";
        }
        for( int j=1; j<=2*n-2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}


