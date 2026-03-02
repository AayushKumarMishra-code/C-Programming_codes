#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    double sum=0;
    for(int i=0;i<=n-1;++i){
        sum+=a[i];
    }
    double res=sum/n;
    printf("%f", res);
    return 0;
}