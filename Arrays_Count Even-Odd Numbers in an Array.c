#include <stdio.h>

int main() {

    int n;
    int even=0;
    int odd =0;
    
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<=n-1;++i){
        if(a[i]%2==0){
            ++even;
        }
        else{
            ++odd;
        }
    }
    printf("%d %d",even,odd);
    
    return 0;
}