//Problem5StenSaxPåse
/*This program is to make game called as Rock, Paper and Scissor
where 0 is represented as Rock, 1 as Scissor and 2 as Paper.*/
// Created by Navjot Kaur
//Date: 2020-10-31
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rockPaperScissor.h"
#include "rockPaperScissor.c"

int main()
{
    //Define variables
    char ch;

    //Loop to repeat the game again if user want to do it
    do{   
        //call the function to play the game
        printf(rock_scissor_paper());
        printf("Do you want to repeat once again (Y/N): ");
        scanf(" %c", &ch);
    } while(ch != 'n' || ch != 'N');
    
    return 0;
}