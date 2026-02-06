#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int row,col;
    scanf("%d%d",&row,&col);
    for(int i  = 0;i < row; i++){
          for(int j  = 0;j < col; j++){
              printf("*");
          }printf("\n");
    }
    
    return 0;
}
