#include <stdio.h>
#include <stdlib.h>

int chess[8];

void imprimir(int p) {
  for (int i = 1; i <= p; ++i) {
    printf("%d ", chess[i]);
  }
  printf("\n");
}

int atacam(int row, int column) {
  for (int i = 1; i <= row - 1; ++i) {
    if (chess[i] == column) {
      return 0;
    } else if (abs(chess[i] - column) == abs(i - row)) {
      return 0;
    }
  }

  return 1;
}

void dama(int row, int n) {
  for (int column = 0; column < n; ++column) {
    if (atacam(row, column)) {
      chess[row] = column;
      if (row == n) {
        imprimir(n);
      } else {
        dama(row + 1, n);
      }
    }
  }
}

int main() {
  dama(1, 8);
  return 0;
}