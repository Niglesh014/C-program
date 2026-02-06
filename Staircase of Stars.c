#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    for(int row = 0;row <n; row++){
        for(int col = 0;col<n;col++){
            if(col==0 || row == col || row == n-1 || row >= col ){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }
    return 0;
}
