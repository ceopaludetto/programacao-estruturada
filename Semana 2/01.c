#include <stdio.h>

float percent(float grade, float n) {
  float value = grade / n;
  return value * 100;
}

float media(float arr[], int len) {
  float m = 0;
  for(int j = len - 1; j >= 2; j--) {
    m += arr[j];
  }

  m = m / (len - 3);
  return m;
}

void sort(float arr[], int len) {
  for(int i = 0; i < len - 1; i++) {
    int min = i;

    for(int j = i + 1; j < len; j++) {
      if(arr[j] < arr[min]) {
        min = j;
      }
    }

    float t = arr[min];
    arr[min] = arr[i];
    arr[i] = t;
  }
}

int main() {
  int s = 9;
  int n, a = 0, b = 0, c = 0, d = 0, f = 0;
  scanf("%d", &n);

  float notas[n][s];
  int ra[n];

  for(int i = 0; i < n; i++) {
    scanf("%d", &ra[i]);
    for(int j = 0; j < s; j++) {
      scanf("%f", &notas[i][j]);
    }
  }

  for(int i = 0; i < n; i++) {
    sort(notas[i], s);
    float m = media(notas[i], s);
    char letter;

    if(m < 4.5) {
      f++;
      letter = 'F';
    } else if(m < 5.5) {
      d++;
      letter = 'D';
    } else if(m < 7) {
      c++;
      letter = 'C';
    } else if(m < 8.5) {
      b++;
      letter = 'B';
    } else {
      a++;
      letter = 'A';
    }

    printf("%d %.3f %c\n", ra[i], m, letter);
  }

  printf("\n");
  printf("A %d %.1f\n", a, percent(a, n));
  printf("B %d %.1f\n", b, percent(b, n));
  printf("C %d %.1f\n", c, percent(c, n));
  printf("D %d %.1f\n", d, percent(d, n));
  printf("F %d %.1f\n", f, percent(f, n));

  return 0;
}