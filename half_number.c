#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float half(int A){
    float res = A/2.0;
    return res;
}

int main() {
    int a;
    scanf("%d" , &a);
    float result = half(a);
    printf("Half of %d is %.2f" , a , result);
    return 0;
}
