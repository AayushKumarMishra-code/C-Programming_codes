#include <stdio.h>

int main() {
      int num,i;
    scanf("%d %d",&num,&i);
    num = num^(1<<i);
    printf("%d",num);
    return 0;
}