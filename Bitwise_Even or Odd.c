#include <stdio.h>

int main() {

    int b;
    scanf("%d" , &b);
    if((b&1)==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}