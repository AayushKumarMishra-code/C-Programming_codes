#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float floatDiscount(float price , float percent){
    float discountAmount = (price * percent)/100;
    float discountPrice = price - discountAmount;
    return discountPrice;
} 
int main() {

    float price1 , percent1;
    scanf("%f %f" , &price1,&percent1);
    float res = floatDiscount( price1,percent1);
    printf("The final price is: %f" , res);
    
    return 0;
}