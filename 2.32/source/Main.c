#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	float height, BMI, weight, m;
	printf("�п�J����(����)=>");
	scanf_s("%f", &height);
	printf("�п�J�魫(����)=>");
	scanf_s("%f", &weight);
	m = height / 100;
	BMI = weight / (m*m);
	printf("�A��BMI��%f", BMI);
	system("pause");
	return 0;
}