#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int number, square, cube;
	printf("number	square  cube\n");
	for (number = 0; number <= 10; number++)
	{
		square = pow(number, 2);
		cube = pow(number, 3);
		printf("%d  %d  %d\n", number, square, cube);
	}
	system("pause");
	return 0;
}