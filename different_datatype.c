#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void dataType(int A ,long int B,char C ,float D,    double E){
    printf("%d\n%ld\n%c\n%.3f\n%.9f" , A,B,C,D,E);
    
}


int main() {
    int a;
    long int b;
    char c;
    float d;
    double e;
    

    scanf("%d %ld %c %f %lf" ,&a,&b,&c,&d,&e);  
    dataType(a,b,c,d,e);
    return 0;
}