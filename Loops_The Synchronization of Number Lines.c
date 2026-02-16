#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int m;
    scanf("%d %d",&n,&m);
    if(n>=m){
     for(int i=m;;++i){
         if(i%n==0&&i%m==0){
             printf("%d",i);
             break;
         }
     }   
    }
    else if(m>n){
         for(int i=n;;++i){
         if(i%n==0&&i%m==0){
             printf("%d",i);
             break;
         }
     }  
    }

    return 0;
}