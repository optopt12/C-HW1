#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	printf("�п�J�@�ӼƦr�ӧP�O���ƩΩ_��=>");
	scanf_s("%d", &number);
	if (number % 2 == 0)
	{
		printf("%d������\n", number);
	}
	if (number % 2 != 0)
	{
		printf("%d���_��\n", number);
	}
	system("pause");
	return 0;
}