#include <stdio.h>

int main() {

    double income,tax ;
    
    scanf("%lf" , &income);
    if (income>=0){
    if (income<=250000){
        printf("0.00");
    }
    else if(250000<income && income<=500000){
        income=income-250000.0;
        tax = (5.0/100.0)*income;
        printf("%.2lf", tax);
        
    }
    else if(500000<income && income<=1000000){
       
        tax= (5.0/100.0)*250000.0;
        income-=500000.0;
        
        tax+= ((20.0/100.0)*income);
        printf("%.2lf", tax);
        
    }
    else if(1000000<income){
        
       tax= (5.0/100.0)*250000.0;
        income-=500000.0;
        tax+= ((20.0/100.0)*500000);
        income-= 500000.0;
        tax+= ((30.0/100.0)*income);
        printf("%.2lf", tax);
        
    }
        
    }
    else{
        printf("INVALID");
    }
    
    return 0;
}
