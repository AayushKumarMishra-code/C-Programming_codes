#include <stdio.h>

int main() {
     int a, i;
    scanf("%d%d", &a,&i);
    a= a>>i;
    int w= a&1;
    printf("%d",w);
    return 0;
}