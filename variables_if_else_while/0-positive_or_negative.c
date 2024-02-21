#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program will assign a random number to the variable n each time it is executed.
 * Return: always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n < 0){
		printf("The number is positive");
	}
	else if(n > 0){
		printf("The number is negative");
	}
	else{
		printf("The number is zero.");
	}
	return (0);
}
