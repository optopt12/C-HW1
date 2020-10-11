#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;
	printf("叫块计\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if (a > b && b > c)
	{
		printf("程计%d,程计%d", a, c);
	}
	if (a > c && c > b)
	{
		printf("程计%d,程计%d", a, b);
	}
	if (b > c && c > a)
	{
		printf("程计%d,程计%d", b, a);
	}
	if (b > a && a > c)
	{
		printf("程计%d,程计%d", b, c);
	}
	if (c > a && a > b)
	{
		printf("程计%d,程计%d", c, b);
	}
	if (c > b && b > a)
	{
		printf("程计%d,程计%d", c, a);
	}
	system("pause");
	return 0;
}