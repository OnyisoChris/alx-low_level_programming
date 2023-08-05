#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * cal_coins - calculating number of coins
 * @cents: cents to be computed
 * Return: The minimum number of coins
 */

int cal_coins(int cents);

int main(int argc, char *argv[])
{
	int coins, cents;

	coins = 0;
	cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = cal_coins(cents);
	printf("%d\n", coins);
	return (0);
}

/**
 * cal_coins - calculating number of coins
 * @cents: cents to be computed
 * Return: The minimum number of coins
 */

int cal_coins(int cents)
{
	int coins = 0;

	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}
	while (cents >= 5)
	{
		coins++;
		cents -= 5;
	}
	while (cents >= 1)
	{
		coins++;
		cents -= 1;
	}

	return (coins);
}
