#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int angle;
    scanf("%d", &angle);
    if(angle<360){
    if(angle==360){
        printf("Full Rotation");
    }
    else if(angle>180){
        printf("Reflex Angle");
    }
    else if(angle==180){
        printf("Straight Angle");
    }
    else if(angle>90){
        printf("Obtuse Angle");
    }
    else if(angle==90){
        printf("Right Angle");
    }
    else{
        printf("Acute Angle");
    }
}
    else{
 
            if(angle%360==0){
        printf("Full Rotation");
    }
        else if(angle%360>180){
        printf("Reflex Angle");
    }
        else if(angle%360==180){
        printf("Straight Angle");
    }
        else if(angle%360>90){
        printf("Obtuse Angle");
    }
     else if(angle%360==90){
        printf("Right Angle");
    }
        else{
        printf("Acute Angle");
    }
            
        
        
    }
    return 0;
}