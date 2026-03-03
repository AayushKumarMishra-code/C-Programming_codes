#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    int m;
    int found=0;
    
    int index;
    scanf("%d",&m);
    
    for(int i=0;i<=n-1;++i){
        if(a[i]==m){
            ++found;
            index=i;
            break;
        }
    }
        
    if(found){
        printf("%d",index);
    }
    else{
        printf("-1");
    }
    
    
    return 0;
}