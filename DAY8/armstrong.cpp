#include<iostream>
using namespace std;
bool checkArmstrong(int n){
	//Write your code here
		int x=n;
		// int count =0;
		int numDig =(int) log10(x)+1;
		
		int sum =0 ;
		while (x > 0) {
			int last = x % 10;
			int num =(int)pow(last,numDig); 
			sum = sum+num; 
			x=x/10;
		}

		
		if( sum == n ){
			return true;
		}
		else{
		 return false;
		}
		

		}

