#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROUNDS 10

int compareMoves(char *playerMove, char *computerMove) {
    if (strcmp(playerMove, computerMove) == 0)
        return 0; // draw
    else if ((strcmp(playerMove, "paper") == 0 && strcmp(computerMove, "rock") == 0) ||
             (strcmp(playerMove, "rock") == 0 && strcmp(computerMove, "scissors") == 0) ||
             (strcmp(playerMove, "scissors") == 0 && strcmp(computerMove, "paper") == 0))
        return 1; // win
    else
        return -1; // loss
}

int main() {
    char playerMove[20];
    char computerMove[20];
    char results[MAX_ROUNDS];
    int round = 0;
    int playerScore = 0;
    int computerScore = 0;

    printf("Welcome to Rock, Paper, Scissors in C :)\n");

    while (1) {
        printf("\nRound %d\n", round + 1);
        printf("Enter your move (rock, paper, scissors), results - to show detailed results or exit - to leave\n");
        scanf("%s", playerMove);

        if (strcmp(playerMove, "exit") == 0) {
            break;
        }

        if (strcmp(playerMove, "results") == 0) {
            for (int i = 0; i < round; i++) {
                printf("%c ", results[i]);
            }
            printf("\n");
            continue;
        }

        // pc's move
        int random = rand() % 3;
        switch (random) {
            case 0:
                strcpy(computerMove, "paper");
                break;
            case 1:
                strcpy(computerMove, "rock");
                break;
            case 2:
                strcpy(computerMove, "scissors");
                break;
        }

        // deciding who won
        int result = compareMoves(playerMove, computerMove);
        if (result == 1) {
            printf("Your move: %s, PC's move: %s - You won!\n", playerMove, computerMove);
            results[round] = 'W';
            playerScore++;
        } else if (result == -1) {
            printf("Your move: %s, PC's move: %s - You lost.\n", playerMove, computerMove);
            results[round] = 'L';
            computerScore++;
        } else {
            printf("Your move: %s, PC's move: %s - Draw.\n", playerMove, computerMove);
            results[round] = 'D';
        }

        round++;
        if (round >= MAX_ROUNDS) {
            printf("Max rounds limit reached.\n");
            break;
        }
    }

    printf("\nResults after %d rounds:\n", round);
    printf("You: %d\n", playerScore);
    printf("PC: %d\n", computerScore);

    return 0;
}
