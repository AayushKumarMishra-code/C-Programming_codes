#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 int sumoflastdigits( int d , int f){
    //  d%=10;
    //  f%=10;
     return d%10+f%10;
     
     
 }
int main() {
    int a, b;
    scanf("%d %d" , &a ,&b);
    int res = sumoflastdigits( a, b);
    printf("The sum of last digits is: %d" , res);
      
    return 0;
}