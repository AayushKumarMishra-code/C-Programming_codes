#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 int inttosecond(int hours , int minutes , int seconds){
     hours*= 3600;
     minutes*= 60;
     return hours + minutes + seconds;
     
}



int main() {
    int hours ,minutes, seconds;
    scanf("%d %d %d" , &hours , &minutes , &seconds);
    int res = inttosecond( hours , minutes , seconds);
    printf("Total seconds: %d" , res);
       
    return 0;
}
