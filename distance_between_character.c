#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int alpha( int a , int b){
      
     return b - a ;
}
int main() {
    char A , B;
    scanf("%c %c",&A, &B);
    int res = alpha(A,B);
    printf("The distance between %c and %c is %d" , A , B , res);

       
    return 0;
}
