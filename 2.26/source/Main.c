#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	printf("請輸入兩個整數 判斷第一個整數是否為第二個整數的倍數:");
	scanf_s("%d", &i);
	scanf_s("%d", &j);
	if (i % j == 0)
	{
		printf("%d是%d的倍數", i, j);
	}
	else
	{
		printf("%d不是%d的倍數", i, j);
	}
	system("pause");
	return 0;
}