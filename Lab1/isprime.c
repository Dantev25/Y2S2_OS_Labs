#include <stdio.h>

void main() 
{

  int n, i, isprime = 0;
  printf("\nEnter a positive integer: ");
  scanf("%d", &n);
  while(n<0){
    printf("\nError:Number should be +ve, input again: ");
    scanf("%d",&n);
  }
  // 0 and 1 are not prime numbers
  // change isprime to 1 for non-prime number
  if (n == 0 || n == 1)
    isprime = 1;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change isprime to 1 for non-prime number
    if (n % i == 0) {
      isprime = 1;
      break;
    }
  }

  // isprime is 0 for prime numbers
  if (isprime == 0)
    printf("%d is a prime number.\n", n);
  else
    printf("%d is not a prime number.\n", n);

  return 0;
}