#include<bits/stdc++.h>

using namespace std;

 

int fib(int n){

        if(n==1||n==2){

                return 1;

        }

        else{

                int x=1;

                int y=1;

                int z=0;

                for(int i=3;i<=n;i++){

                     z=x+y;

                     x=y;

                     y=z;   

                }

                return z;

        }

}

 

int main()

{

       

        int n;

        cin>>n;

        cout<<fib(n);

}