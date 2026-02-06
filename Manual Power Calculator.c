#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int a,b;
    scanf("%d %d",&a,&b);
     if(b==0){
        a=1;
    }
    int c= a;
    for(int i = 0;i<b-1;i++){
        a = c*a;
    }
   
    printf("%d",a);
    return 0;
}
