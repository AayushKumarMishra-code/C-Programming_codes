#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int index;
    scanf("%d",&index);
    int res = num&(~(1<<(index)));
    printf("%d", res);
    return 0;
}