int sumOfAllDivisors(int n){
	// Write your code here.
    int sum=0;

for(int i=1;i<=n;i++)

{

ans+=(n/i)*i;   // this formula to find the divisors (N/i)*i 

}

return sum;

}