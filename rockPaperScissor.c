//Problem5StenSaxPåse
/*This program is to make game called as Rock, Paper and Scissor
where 0 is represented as Rock, 1 as Scissor and 2 as Paper.*/
// Created by Navjot Kaur
//Date: 2020-10-31
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rockPaperScissor.h"

//Declaration of functions

//Function to get user choice
int user_input()
{
    int user_choice;
    printf("Enter your choice (Rock = 0, Scissor = 1, Paper = 2): ");
    scanf("%d", &user_choice);
    return user_choice;
}

//Function to get computer's choice
int computer_input()
{
    srand(time(0));
    int computer_choice;
    computer_choice = rand() % 3;
    printf("Computer chose: ");
    if (computer_choice == 0)
    {
        printf("Rock\n");
    }
    else if (computer_choice == 1)
    {
        printf("Scissor\n");
    }
    else if (computer_choice == 2)
    {
        printf("Paper\n");
    }

    return computer_choice;
}

//Function to play game 
int rock_scissor_paper()
{
    //Define and intialize the variables
    int player_score = 0;
    int computer_score = 0;
    int Rock = 0;
    int Scissor = 1;
    int Paper = 2;
    int quit = 0;

    //Loop will iterate until one player will get 10 points
    while (quit != 1)
    {
        int player1 = user_input();
        int player2 = computer_input();
        if (player1 == player2)
        {
            printf("Its draw\n");
        }
        else if (player1 == Rock && player2 == Scissor || player1 == Scissor && player2 == Paper || player1 == Paper && player2 == Rock)
        {
            printf("You have won the round\n");
            player_score++;
        }
        else
        {
            printf("You have lost the round\n");
            computer_score++;
        }

        printf("Scores(You-Computer): %d-%d\n", player_score, computer_score);
        if (player_score == 10 || computer_score == 10)
        {
            quit = 1;
        }
    }
    if(player_score > computer_score){
        printf("You have won the game with %d-%d\n", player_score, computer_score);
    }
    else if(player_score < computer_score){
        printf("Computer won the game and you lost it with %d-%d\n", player_score, computer_score);
    }
    else{
        printf("It was draw\n");
    }
}


