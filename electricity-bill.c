#include <stdio.h>

int main() {

    int unit;
    float res;
    scanf("%d" , &unit);
    if(unit<0){
        printf("Invalid Input!");
    }
    else{
        if(unit<=100){
           
         res = (10.0/100)*unit*5.0;
            printf("The electricity bill is: %.2f." ,unit*5.0- res);
            
        }
        
        else if(unit>100 && unit<= 300){
             
            if((100*5.0 + (unit - 100)*7.0) <= 1200.0){
                res = (100*5.0 + (unit - 100)*7.0) *10/100.0;
                printf("The electricity bill is: %.2f." ,(100*5.0 + (unit - 100)*7.0) - res);
                
            }
            else{
                printf("The electricity bill is: %.2f." , 100*5.0 + (unit - 100)*7.0);
            }
        }
        else if(unit> 300){
             printf("The electricity bill is: %.2f." , 100*5.0 + 200*7.0 +(unit - 300)*10.0);
        }
    }
    return 0;
}