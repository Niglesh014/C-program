#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int numWaterBottles(int numBottles, int numExchange) {
    int total = numBottles;
    int empty = numBottles;
    
    while(empty >= numExchange){
        int numBottle = empty / numExchange;
        total = total + numBottle;
        empty = numBottle + (empty % numExchange);
    }
    return total;
}
}
