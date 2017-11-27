/*
 ============================================================================
 Name        : divisors.c
 Author      : Mehdi Sagar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, count ;
	for (i = 2; i <= 20; i++){
		count = 0;
		for(j = 2; j < 20; j++)
		{
			if(i % j == 0 && i != j)
				count++;
		}

		printf("%d ", i);
		while(count != 0){
			printf("%c ",'*');
			count--;
		}
		printf("\n");
	}




	return 0;
}
