#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	printf("�п�J��Ӿ�� �P�_�Ĥ@�Ӿ�ƬO�_���ĤG�Ӿ�ƪ�����:");
	scanf_s("%d", &i);
	scanf_s("%d", &j);
	if (i % j == 0)
	{
		printf("%d�O%d������", i, j);
	}
	else
	{
		printf("%d���O%d������", i, j);
	}
	system("pause");
	return 0;
}