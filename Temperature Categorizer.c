#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    scanf("%d",&t);
    if(t<0){
        printf("Freezing");
    }
    else if(t>=0&&t<=30){
        printf("Normal");
    }
    else if(t>30){
        printf("Hot");
    }
    return 0;
}