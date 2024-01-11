bool palindrome(int n)
{
    // Write your code here
    int x=n;
    int reverse=0;
    while(x!=0){
        int digit=x%10;
        reverse=reverse*10+digit;
        x=x/10;
    }
   if(n==0){
       return true;

   }
   else{
       return false;
   }
    }
}