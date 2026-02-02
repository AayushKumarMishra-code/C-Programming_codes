#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int h,t;
    float c;
    scanf("%d%e%d" ,&h,&c,&t);
    int cond1= (h>50);
    int cond2= (c<0.7);
    int cond3= (t>5600);
    int count = cond1+cond2+cond3;
    if(count==3){
        printf("The grade of the steel is: %d\n" ,10);
        printf("All of the conditions met.");
        
        
    }
    else if(count==2){
        if (cond1==1&&cond2==1){
             printf("The grade of the steel is: %d\n" ,9);
        printf("Two conditions met.");
            
        }
        else if(cond2==1&&cond3==1){
             printf("The grade of the steel is: %d\n" ,8);
        printf("Two conditions met.");
        }
        else if(cond3==1&&cond1==1){
             printf("The grade of the steel is: %d\n" ,7);
        printf("Two conditions met.");
        }
        
    }
     else if(count==1){
        printf("The grade of the steel is: %d\n" ,6);
        printf("Only one condition met.");
        
    }
    else if(count==0){
        printf("The grade of the steel is: %d\n" ,5);
        printf("None of the conditions met.");
        
    }
    
    return 0;
}