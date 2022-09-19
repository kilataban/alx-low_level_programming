#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int random_no;
	int total;
	int counter;

	srand(time(NULL));
	for (counter = 0; total > 220; counter++)
	{
		random_no = (rand() % 125) + 1;
		printf("%c", random_no);
		total -= random_no;
	}
	printf("%c", total);

	return (0);
}

