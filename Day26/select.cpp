//selection sort 1st code 
#include <iostream>

using namespace std;
void fun(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<=n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}

int main()
{
    int a[6]={1,2,3,6,8,1};
    int n=6;
    fun(a,6);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

//selection sort second code
#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector <int> &v){
    int n=v.size();
    for( int i=0; i<n; i++){
        //finding smallest element
        int min_index=i;
        for(int j=i+1; j<n; j++){
            if( v[j]<v[min_index]){
                min_index=j;
            }
    }
    //placing min at the beginning
    if(i!=min_index){
        swap(v[i],v[min_index]);
    }
    
}
}

int main(){
    int n;
    cin>>n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    selectionsort(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<""<<endl;
    }
}