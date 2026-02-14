#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int count=0;
    scanf("%d",&n);
    if(n>1){
        for(int i=2;i<=sqrt(n);++i){
            if(n%i==0){
                printf("Composite");
                ++count;
                break;
                
            }
        }
        if(count==0){
            printf("Prime");
        }
    }
    
    else{
        printf("None");
    }
    return 0;
}
