#include <stdio.h>
#include <cs50.h>
#include <math.h>

float input (void)//acquires value
{    
    float c = -1;
    bool needsInput = true;
    do{ //repeats until proper input
       c = get_float("Change owed: ");
       if (c > 0){
           needsInput = false;
       }    
    }while(needsInput);
    return c;
}

int main (void){
    int n = 0;
    float val = input();
    //convert to int
    int cents = round(val*100);
    bool unfinished = true;
    do {//subtracts increments of change
        if (cents >= 25){
            cents -= 25;
            n++;
        }else if (cents >= 10){
            cents -= 10;
            n++;
        }else if (cents >= 5){
            cents -= 5;
            n++;
        } else if (cents > 0){
            cents -= 1;
            n++;
        }else {
         //completely CHANGE'd!
        unfinished = false;
    }
    }while (unfinished);
    printf("%i\n",n);
}
