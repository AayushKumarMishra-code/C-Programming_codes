#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int area(int length , int width){
    return length*width;
}
int main() {

   int a, b;
    scanf("%d %d" , &a,&b);
    
    printf("The area is: %d units" , area( a, b));
    
    
    
    return 0;
}