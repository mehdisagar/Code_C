/*
 ============================================================================
 Name        : flan.c
 Author      : Mehdi Sagar
 Version     :
 Copyright   : Your copyright notice
 Description : simple betting game
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash = 100;
void Play(int betting)
{
	char card[3] = {'J', 'Q', 'K'};
	srand(time(NULL));
	printf("Shuffling...\n");

	int i;
	for(i = 0; i < 5; i++)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		char temp = card[x];
		card[x] = card[y];
		card[y] = temp;
	}

	int PlayerGuess;
	printf("Which Position Would You Like To Chose? ");
	scanf("%d", &PlayerGuess);

	if(card[PlayerGuess-1] == 'Q')
	{
		printf("You Win\n");
		cash += 3*betting;
		printf("Now you Own $%d \n", cash);
	}
	else
	{
		printf("You Lost\n");
		cash -= betting;
        printf("Now you Own $%d \n", cash);


	}
    printf("***************\t Try Again \t***************\n");

}

int main()
{
	int bet;
	printf("******************\tWelcome To Virtual Casino\t*******************\n\n");
	while(cash > 0)
	{
		printf("How Much Money Do You Want To Bet? ");
		scanf("%d", &bet);
		if(bet > cash || bet == 0) break;
		Play(bet);

	}
}
