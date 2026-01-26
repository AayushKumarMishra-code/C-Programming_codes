#include <stdio.h>

int main() {

    int num,i;
    scanf("%d%d" ,&num,&i);
    int val= num|1<<i;
    printf("%d", val);
    return 0;
}