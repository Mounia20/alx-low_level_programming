#include "main.h"
#include <stdio.h>
void fizz_buzz(void)
{
	int x;

	for (x = 1; x < 100; x++)
	{
		if (x == 100)
			printf("Buzz");
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuz");
		else if (x % 3  == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%d", x);
	}
	printf("%d", x);
}
