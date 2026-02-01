#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("The largest number is : %d", a);
    }
    else if(b>=a && b>=c){
        printf("The largest number is : %d", b);}
    
    else if(c>=a && c>=b){
        printf("The largest number is : %d", c);}
    return 0;
}