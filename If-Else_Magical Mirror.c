#include <stdio.h>

int main() {

    int num;
    scanf("%d",&num);
    
    int cond1 = (num>10 && num%2==0);
     int cond2 = (num>15 && num%3==0);
     int cond3 = (num%7==0);
    int count= cond1 + cond2 +cond3;
    if(num>0){
        if(count==3){
        printf("The verdict for the number %d is: SUPERNATURAL" , num);
        
    }
    else if(count ==2){
        printf("The verdict for the number %d is: MIRACULOUS" , num);    
        }
    else if(count ==1){
        printf("The verdict for the number %d is: MAGICAL" , num);    
        }
    else if(count ==0){
        printf("The verdict for the number %d is: NORMAL" , num);    
        }
        
    }
    
    else{
        printf("The verdict for the number %d is: INVALID" , num);
        
    }
    
    return 0;
}