#include <stdlib.h>
#include <stdio.h>

int max = 1;
int n;

int fibo(int *fi, int n) {
  if (n > max) {
    for(int i = max + 1; i <= n; i++) {
      int r1 = (*(fi + i - 1)) % i;
      int r2 = (*(fi + i - 2)) % i;

      *(fi + i) = *(fi + r1) + *(fi + r2); 
    }

    max = n;
  }

  return *(fi + n);
}

int main() {
  int *fi = calloc (50000000, sizeof (int));

  *(fi + 0) = 1;
  *(fi + 1) = 1;

  while (scanf("%d", &n) == 1) {    
    printf("%d\n", fibo(fi, n));
  }

  return 0;
}