#include <stdio.h>

int main() {

    int lab;
    int swamp;
    int sec;
    int num1;
    
    
    scanf("%d", &lab);
    
    if(lab==1){
        printf("Player chooses the Left path.\n");
        
        scanf("%d",&swamp);
            if(swamp==1){
                printf("Poor choice, Game Over!\n");
                
            }
            else{
            printf("Player found a bridge.\n");
            
            scanf("%d",&sec);
                if(sec==1){
                    printf("Player crosses the bridge safely.\n");
                    scanf("%d",&num1);
                    if(num1==1){
                        printf("All that glitters is not gold, Game Over!");
                    }
                    else if(num1==2){
                        printf("All your efforts were for nothing, Game Over!");
                    }
                    else if(num1==3){
                        printf("Congratulations!! You won the treasure.");
                    }
                                }
                else{
                    printf("Poor luck, Game Over!\n");
                }
            }
    }
    else if(lab==2){
        printf("Player chooses the Middle path.\n");
        int maze;
        scanf("%d",&maze);
            if(maze==582){
                printf("Player solved the puzzle.\n");
                scanf("%d",&num1);
                if(num1==1){
                printf("All that glitters is not gold, Game Over!");
            }
            else if(num1==2){
                printf("All your efforts were for nothing, Game Over!");
            }
            else if(num1==3){
                printf("Congratulations!! You won the treasure.");
            }
                
                
                
            }
            else{
                printf("Foolish player, Game Over!\n");
            }
    }
    else if(lab==3){
        printf("Player chooses the Right path.\n");
        int Vault;
        scanf("%d",&Vault);
            if(Vault==30){
                printf("Player solved the puzzle.\n");
                scanf("%d",&num1);
                if(num1==1){
                printf("All that glitters is not gold, Game Over!");
                }
                else if(num1==2){
                    printf("All your efforts were for nothing, Game Over!");
                }
                else if(num1==3){
                    printf("Congratulations!! You won the treasure.");
                }

                }
                else{
                    printf("Foolish player, Game Over!\n");
                }
        
        
    }
    
  
    
    return 0;
}