#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
      int n;
    scanf("%d", &n);

    for(int row = 0; row < n; row++) {

        for(int col = 0; col < n - row; col++) {

            if((row + col) % 2 == 0)
                printf("1");
            else
                printf("0");
        }

        printf("\n");
    }

    return 0;
}
