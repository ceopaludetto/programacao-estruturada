#include <stdio.h>

int main() {
  double price, hours;
  int number;

  scanf("%d %lf %lf", &number, &hours, &price);
  printf("NUMBER = %d\n", number);
  printf("SALARY = U$ %.2lf\n", price * hours);

  return 0;
}