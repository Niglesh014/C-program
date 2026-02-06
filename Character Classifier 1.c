#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch ;
    scanf("%c",&ch);
    
    if (ch >= 'A' && ch <= 'Z' ){
        printf("Uppercase Alphabet");
    }
    else if (ch >= 'a' && ch <= 'z' ){
          printf("Lowercase Alphabet");
    }
    else if(ch >= '0' && ch <= '9'){
          printf("Digit");
    }
    else{
          printf("Special Character");
    }
    
    
    return 0;
}
