#include <stdio.h>
#include <string.h>

int main() {

    int month;
    int year;
    scanf("%d",&month);
    scanf("%d",&year);
    if(month<=0||month>12){
        printf("Invalid Month\n");
    }
    if(year<1){
        printf("Invalid Year");
        return 0;
    }
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("31");
            break;
        
        case 4:
        case 6:
        case 9:
        case 11: printf("30");
            break;
            
        case 2: 
            if(year%100==00){
                if(year%4==0&&year%100==0&&year%400==0){
                printf("29");
            }
            else{
                printf("28");
            }
            }
            else{
                if(year%4==0||(year%100==0&&year%400==0)){
                printf("29");
            }
            else{
                printf("28");
            }
            }
            
    }
    return 0;
}