#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void intbuildNumber(int A, int B, int C , int D){
 printf("The number is: %d" , (A*1000+B*100+C*10+D)*5);
}

int main() {

    int a,b,c,d;
    scanf("%d %d %d %d" , &a,&b,&c,&d);
    intbuildNumber( a,b,c,d );
    return 0;
}
