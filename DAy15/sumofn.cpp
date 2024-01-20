int sum=0;

int sumFirstN(int n) {

  if (n > 0) {

    sum = sum + n;

    sumFirstN(n - 1);

  }

  return sum;

}
