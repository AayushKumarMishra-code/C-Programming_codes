#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sep(int A){
    int b = A%10;
    int c = A%100;
    c/=10;
    int d =A/100;
    printf("%d\t", d);
    printf("%d\t", c);
    printf("%d\t" , b);
    return 0;
    
}


int main() {
    int a;
    scanf("%d" , &a);
    sep(a);
    return 0;
}