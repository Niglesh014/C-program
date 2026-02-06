#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int num, i, flag = 1;
    scanf("%d", &num);

    if(num <= 1) {
        flag = 0;
    }else{
        for (i = 2; i * i <= num; i++) {
         if ( num % i == 0) {
           flag = 0;
                break;
       }
     }
    }
    if (flag)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
