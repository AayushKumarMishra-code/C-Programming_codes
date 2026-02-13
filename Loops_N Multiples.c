#include <stdio.h>

int main() {

    int n,num;
    scanf("%d %d",&n,&num);
    for(int i=1;i<=n;++i){
        printf("%d ",num*i);
    }
    return 0;
}