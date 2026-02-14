#include <stdio.h>

int main() {

    int num;
    scanf("%d",&num);
    
    for(int i=1;i<=num;++i){
        
        if(i%3==0){
            ++num;
            continue;
            
            
        }
        else{
            printf("%d ",i*i);
        }
    }
    return 0;
}