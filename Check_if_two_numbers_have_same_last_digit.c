#include <stdio.h>

int main()
{

    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 % 10 == num2 % 10)
        printf("YES");
    
    else
        printf("NO");
    
    return 0;
}
