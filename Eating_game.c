#include <stdio.h>
 
 
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;++i){
        int num;
        scanf("%d",&num);
        int a[num];
        for(int j=0;j<=num-1;++j){
            scanf("%d",&a[j]);
        }
        int max=0;
        for(int k =0;k<=num-1;++k){
            if(a[k]>max){
                max=a[k];
            }
            
        }
        int count=0;
        for(int p =0;p<=num-1;++p){
            if(a[p]==max){
                ++count;
            }
            
        }
        
        printf("%d\n",count);
        
        
    }
 
    return 0;
}