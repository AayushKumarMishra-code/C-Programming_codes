#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1 , num2;
    printf("Enter both number with space in between : ");
    scanf("%d %d" , &num1, &num2);
    printf("The sum of %d and %d is %d." , num1 ,num2 ,num1+num2); 
    
    return 0;
}