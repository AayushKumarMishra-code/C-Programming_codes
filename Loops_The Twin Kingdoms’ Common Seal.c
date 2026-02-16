#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    
    int m;
    scanf("%d %d",&n,&m);
    int count=0;
    if(n>=m){
    for(int i=1;i<=n;++i){
        if(n%i==0&&m%i==0){
            if(i>count){
                count=i;
            }
        }
    }
        printf("%d",count);
    }
    
    else if(m>n){
    for(int i=1;i<=m;++i){
        if(n%i==0&&m%i==0){
            if(i>count){
                count=i;
            }
        }
    }
        printf("%d",count);
    }
    return 0;
}