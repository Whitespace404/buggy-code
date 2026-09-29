#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int sum(int *arr, int n);
int* getPrimes(int n);
int isPrime(int x);

int main(void) {
  int n;

  printf("Enter n: ");
  scanf("%d", &n);
    
  int *primes = getPrimes(n);

  int s = sum(primes, n);
  printf("The sum of the first %d primes is %d\n", n, s);

  return 0;
}

int sum(int *arr, int n) {
  int total=0;
  for(int i=0; i<n; i++) {
    total += arr[i];
  }
  return total;
}

int* getPrimes(int n) {
  int* result = malloc(n*sizeof(int));
  int i = 0;
  int x = 1;
  while(i < n) {
    if(isPrime(x)) {
      result[i] = x;
      i++;
    }
  x += 2;
  }
  return result;
}

int isPrime(int x) {
    if (x<2) return 0;
    if (x==2) return 1;
  if(x % 2 == 0) {
    return 0;
  }
  for(int i=3; i<=sqrt(x); i+=2) {
    if(x % i == 0) {
      return 0;
    }
  }
  return 1;
}
