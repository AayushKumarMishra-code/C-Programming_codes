#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n , low, high;
    scanf("%d%d%d" , &n,&low,&high);
    if(low<= n && n<=high){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}