#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>1){
        if(n%2!=0){
            for(int i=1;i<=n;++i){
        for(int k=1;k<=n-i;++k){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;++j){
           if(i==1||i==2||j==1||j==2*i-1||j==(2*i)/2||i==n){
               printf("*");
           }
            else{
                printf(" ");
            }
        }
        
       
        printf("\n");
    }
    
    
    for(int i=n-1;i>=1;--i){
        for(int k=1;k<=n-i;++k){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;++j){
           if(i==1||i==2||j==1||j==2*i-1||j==(2*i)/2){
               printf("*");
           }
            else{
                printf(" ");
            }
        }
        
       
        printf("\n");
    }
        }
        
else{
            
            for(int i=1;i<=n;++i){
        for(int k=1;k<=n-i;++k){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;++j){
           if(i==1||i==2||j==1||j==2*i-1||j==(2*i)/2||i==n){
               printf("*");
           }
            else{
                printf(" ");
            }
        }
        
       
        printf("\n");
    }
    
    
    for(int i=n-1;i>=1;--i){
        for(int k=1;k<=n-i;++k){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;++j){
           if(i==1||i==2||j==1||j==2*i-1||j==(2*i)/2){
               printf("*");
           }
            else{
                printf(" ");
            }
        }
        
       
        printf("\n");
    }
        }
    }
    
else{
    printf("Shape Not Possible");
}
    
    
    return 0;
}