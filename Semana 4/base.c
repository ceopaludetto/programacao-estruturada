#include <stdio.h>

void imprimir_em_base(int n, int b) {
  if (n == 0) return;
  int d = n % b;

  imprimir_em_base(n / b, b);

  if(d < 0 && n / b != 0) {
    printf("%d", d * -1);
  } else {
    printf("%d", d);
  }
}

int main() {
  int b, n;
  scanf("%d %d", &b, &n);
 
  imprimir_em_base(n, b);
  return 0;
}