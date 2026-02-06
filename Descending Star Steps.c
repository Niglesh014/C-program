#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);

    for(int row = n; row > 0; row--) {         
        for(int col = 0; col < row; col++) {  
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
