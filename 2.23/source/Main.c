#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;
	printf("�п�J�T�ӼƦr\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if (a > b && b > c)
	{
		printf("�̤j���Ʀr��%d,�̤p���Ʀr��%d", a, c);
	}
	if (a > c && c > b)
	{
		printf("�̤j���Ʀr��%d,�̤p���Ʀr��%d", a, b);
	}
	if (b > c && c > a)
	{
		printf("�̤j���Ʀr��%d,�̤p���Ʀr��%d", b, a);
	}
	if (b > a && a > c)
	{
		printf("�̤j���Ʀr��%d,�̤p���Ʀr��%d", b, c);
	}
	if (c > a && a > b)
	{
		printf("�̤j���Ʀr��%d,�̤p���Ʀr��%d", c, b);
	}
	if (c > b && b > a)
	{
		printf("�̤j���Ʀr��%d,�̤p���Ʀr��%d", c, a);
	}
	system("pause");
	return 0;
}