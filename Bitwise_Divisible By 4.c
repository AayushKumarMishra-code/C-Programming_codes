#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    long n;
    scanf("%ld",&n);
    if(n<=INT_MAX&&n>=INT_MIN){
       if((n&3)==0){
        printf("Divisible");
        }
        else{
        printf("Not Divisible");
         } 
    }
    
    else{
        printf("Out of Range");
    }
    
    return 0;
}