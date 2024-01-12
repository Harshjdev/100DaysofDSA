long reverseBits(long n) {

    long reverse = 0;

 

    for(int i = 0; i < 32; i++) {

        int digit = n % 2;

        n = n / 2;

 

        if(digit != 0) {

            reverse = reverse + ((long)1 << (31 - i));

        }

    }

 

    return reverse;

}