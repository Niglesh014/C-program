#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int mid = n/ 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <n; j++) {
            if (i == j || i+ j == n - 1 || i== mid || j ==mid) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
