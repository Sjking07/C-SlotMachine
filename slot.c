#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <math.h>


int main() {

   
    

    int tokens;
    int a;
    int b;
    int c;
    int diceRoll1;
    int diceRoll2;
    int diceRoll3;
    int input1;
    
    tokens = 100;
    char option;

    printf("\n++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n+           MS-DOS SLOT MACHINE            +");
    printf("\n++++++++++++++++++++++++++++++++++++++++++++\n");
do{
     printf("\n  ----- PRESS ANY BUTTON TO PLAY ------- \n");
     scanf("%d", input1);

    for (a =0; a<1; a++){
        diceRoll1 = (rand()%7) +1;
        printf("%d ", diceRoll1);
    }

    for (b =0; b<1; b++){
        diceRoll2 = (rand()%7) +1;
        printf("%d ", diceRoll2);
    }

    for (c =0; c<1; c++){
        diceRoll3 = (rand()%7) +1;
        printf("%d ", diceRoll3);
    }
    
    if (diceRoll1 == diceRoll2){
        printf("\nYou win!");
        tokens = tokens + 5;
        printf("\nYour tokens %d", tokens);
    }

    if (diceRoll1 == diceRoll3){
        printf("\nYou win!");
         tokens = tokens + 5;
         printf("\nYour tokens %d", tokens);
    }

    if (diceRoll2 == diceRoll3){
        printf("\nYou win!");
         tokens = tokens + 5;
         printf("\nYour tokens %d", tokens);
    }

    else if (diceRoll1 != diceRoll2 && diceRoll1 != diceRoll3 && diceRoll2 != diceRoll3) {
        printf("\nYou Lose 5 coins");
         tokens = tokens - 5;
         printf("\nYour tokens %d", tokens);
    }
    printf("\nDo you want to continue y/n?\n"); //option to continue text
	option = getche(); //creating the option to continue
	}while(option=='y'); //setting the option to continue if input = y
	getche(); //return to line 9
    
    return 0;
   
}