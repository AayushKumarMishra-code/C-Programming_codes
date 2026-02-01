 Open in editor
1
#include <stdio.h>
2
​
3
int main() {
4
​
5
   int year;
6
    scanf("%d", &year);
7
    if(year<=0){
8
        printf("The given year %d is Invalid year.", year);
9
    }
10
    else{
11
        if((year%4==0 && year%100!=0) || (year%400==0)){
12
            printf("Yes, %d is a leap year." , year);
13
            
14
        }
15
        else{
16
            printf("No, %d is not a leap year." , year);
17
            
18
        }
19
        
20
    }
21
    return 0;
22
}