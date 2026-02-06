#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int c1,q1,c2,q2,c3,q3,budget;
    float beforeTax,afterTax;
    scanf("%d %d",&c1,&q1);
    scanf("%d %d",&c2,&q2);
    scanf("%d %d",&c3,&q3);
    scanf("%d",&budget);
    
    beforeTax = (c1*q1) + (c2*q2) + (c3*q3);
    
    afterTax = beforeTax + (beforeTax/100)*10;
    
    printf("Total (Before Tax): %.2f\n",beforeTax);
    printf("Total (After Tax): %.2f\n",afterTax);
    
    if(afterTax < budget){
        printf("Within Budget");
    }
    else{
         printf("Over Budget");
    }
    
    
    return 0;
}
