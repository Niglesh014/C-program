#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num;
    scanf("%d",&num);
    
     int  count = 0, num1 = num,temp = num ;
    while(temp!=0){
        count++; 
        temp = temp/10;
         
    }
    
   int total = 0, rev1 = 0;
    while(num1 > 0){
        rev1 = num1 %10 ;
        int power = 1;
        for(int i = 0 ; i< count;i++){
          power = power * rev1;
       }
        total = total + power;
        num1= num1/10;
    }
    if(total == num){
       printf("true");
    }else{
        printf("false");
    }
}
