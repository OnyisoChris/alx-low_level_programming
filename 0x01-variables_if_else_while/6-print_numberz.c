#include<stdio.h>
/**
 *
 * main - Entry point
 * Description:program that prints all single digit numbers of b10 from 0
 * Return: Always 0
 *
 * */

int main() {
	int num;

	for (num = 0; num <= 9; num++) {
		putchar(num +'0');
	}

	putchar('\n');

	return (0);
}
