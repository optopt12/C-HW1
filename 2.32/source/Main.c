#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	float height, BMI, weight, m;
	printf("請輸入身高(公分)=>");
	scanf_s("%f", &height);
	printf("請輸入體重(公斤)=>");
	scanf_s("%f", &weight);
	m = height / 100;
	BMI = weight / (m*m);
	printf("你的BMI為%f", BMI);
	system("pause");
	return 0;
}