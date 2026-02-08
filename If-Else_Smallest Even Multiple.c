#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    
    scanf("%d",&n);
    if(n%2){
        printf("%d",2*n);
    }
    else{
        printf("%d",n);
    }
    return 0;
}