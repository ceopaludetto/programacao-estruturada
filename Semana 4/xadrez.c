#include <stdio.h>
#include <stdlib.h>

int atacam(int i1, int j1, int i2, int j2) {
    if (i1 == i2) return 1;
    if (j1 == j2) return 1;
    if (abs(i1 - i2) == abs(j1 - j2)) return 1;
    return 0;
}

int main() {
    int i1, i2, j1, j2;
    scanf("%d %d %d %d", &i1, &j1, &i2, &j2);
    if (atacam(i1, j1, i2, j2))
        printf("se atacam\n");
    else
        printf("nao se atacam\n");
    return 0;
}