#include <cs50.h>
#include <stdio.h>


int input (void)//acquires height
{    
    int h = -1;
    bool needsInput = true;
    do{ //repeats until proper input
       h = get_int("Height: ");
       if (h > 0 && h < 9){
           needsInput = false;
       }    
    }while(needsInput);
    return h;
}

int main(void)
{
    int h = input();
    for (int rows = 1;rows<h+1;rows++){
        //first half
        for (int x = 1; x<h+1; x++){
            if (x < h-rows+1){
                printf(" ");
            }else{
                printf("#");
            }
        }
        printf("  ");//middle
        //second half
        for(int x = 1; x<rows+1;x++){
            printf("#");
        }
        printf("\n");
    }
}

