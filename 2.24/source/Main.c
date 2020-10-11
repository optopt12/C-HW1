#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	printf("叫块计ㄓ案计┪计=>");
	scanf_s("%d", &number);
	if (number % 2 == 0)
	{
		printf("%d案计\n", number);
	}
	if (number % 2 != 0)
	{
		printf("%d计\n", number);
	}
	system("pause");
	return 0;
}