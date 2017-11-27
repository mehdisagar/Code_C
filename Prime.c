/*
 ============================================================================
 Name        : Prime.c
 Author      : Mehdi Sagar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

#define MAXNUM 100

int main (int argc, char ** argv)
{
  char is_prime[MAXNUM - 1];
  int ii, num;

  for (ii = 0; ii < MAXNUM - 1; ++ii) {
    is_prime[ii] = 1;
  }
  for(ii = 0; ii < 99; ii++) printf("%d ", is_prime[ii]);
  printf("\n");
  for (num = 2; num <= MAXNUM / 2; ++num) {
    for (ii = num * 2 - 2; ii <= MAXNUM - 2; ii += num) {
      printf("%d ", ii);
      printf("\n");
      is_prime[ii] = 0;
    }
  }
  for(ii = 0; ii < 99; ii++) printf("%d ", is_prime[ii]);
  printf("\n");

  printf ("prime numbers up to %d:\n ", MAXNUM);
  for (ii = 0; ii < MAXNUM - 1; ++ii) {
    if (is_prime[ii]) {
      printf (" %d", ii + 2);
    }
  }
  printf ("\n");

  return 0;
}
