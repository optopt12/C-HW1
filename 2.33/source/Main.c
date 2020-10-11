#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float milage, gas, park, tolls, a,cost;
	// milage是里程數,gas是一公升/加侖是多少錢
	// park是停車費,tolls是過路費,a是平均一公升能行駛多少公里
	printf("請輸入你的里程數=>");
	scanf_s("%f", &milage);
	printf("請輸入你的油錢多少錢(一公升/加侖)=>");
	scanf_s("%f", &gas);
	printf("請輸入你的停車費=>");
	scanf_s("%f", &park);
	printf("請輸入你的過路費=>");
	scanf_s("%f", &tolls);
	printf("請輸入你的油耗(每公升可以跑幾公里)=>");
	scanf_s("%f", &a);
	cost = (milage / a)* gas + park + tolls;
	printf("你的總金額為:%f",cost);
	system("pause");
	return 0;

}