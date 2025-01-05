#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h> // For Sleep()

void opening_msg(void);
int game(void);
void result(int);

int main(int argc, char** argv) {

    opening_msg();

    int trials= game();

    result(trials);

    return 0;
}


void opening_msg(void){

    printf("\x1B[2J\x1B[H");
    printf("\x1B[1mWelcome to \x1B[4;33mNumber Guessing Game\x1B[0m\n\n");

    printf("\x1B[3mInstructions: \x1B[0m\n\n");
    printf("\x1B[91m1.Guess a number between 1(inclusive) and 100(exclusive)\n");
    printf("2. Try to guess a number in minimum trials.\x1B[0m\n\n");
    printf("\x1B[4mThe game will begin in:  ");
    Sleep(1000);

    for(int i= 7; i>=0; i--)
    {
        printf("\x1B[1D\x1B[0K%d", i);
        Sleep(1000);
    }

    printf("\x1B[2J\x1B[H\x1B[0m");
}

int game(void){

    srand(time(NULL));
    int random_number= rand()%100;
    int guess_count= 1, user_guess;

    do
    {
        printf("Enter your guess (\x1B[1;35m%d\x1B[0m): ", guess_count);
        scanf("%d", &user_guess);
        if(user_guess == random_number) return guess_count;
        else if(user_guess > random_number) printf("Guess a smaller number.\n\n");
        else printf("Guess a larger number.\n\n");
        guess_count++;

    }while(user_guess != random_number);
}

void result(int trials){
    printf("Thats Correct !!!\n\n");
    printf("\nCongratulation you completed in \x1B[1;34m%d\x1B[0m trials.", trials);
}

// Learn about escape code: https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797#erase-functions