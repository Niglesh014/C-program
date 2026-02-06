#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if (a>b && a >c){
        if (a == b ||a == c || b == c){
           printf("There is a tie for the greatest number");
       }else{
        printf("%d is the greatest",a);
       }   
        
    }else if (b > a && b > c){
       if (a == b ||a == c || b == c){
           printf("There is a tie for the greatest number");
       }else{
        printf("%d is the greatest",b);
       }
    }else
     if (a == b ||a == c || b == c){
           printf("There is a tie for the greatest number");
       }else{
        printf("%d is the greatest",c);
       }
    return 0;
}
