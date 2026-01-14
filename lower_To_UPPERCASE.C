#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    char a,b;
    printf("Enter your lowercase character: ");
    scanf("%c" , &a);
    b=a-32;
    printf("The uppercase of %c is %c", a,b );
    return 0;
}
