int countDigits(int n){

    // Write your code here.

    int count=0;

    int a=n;

    while(n!=0){

        int L=n%10;

        if (L!= 0 && a % L == 0) {

                  count += 1;

        }

        n=n/10;

    }   

    return count;

}

