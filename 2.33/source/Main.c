#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float milage, gas, park, tolls, a,cost;
	// milage�O���{��,gas�O�@����/�[�ڬO�h�ֿ�
	// park�O�����O,tolls�O�L���O,a�O�����@���ɯ��p�h�֤���
	printf("�п�J�A�����{��=>");
	scanf_s("%f", &milage);
	printf("�п�J�A���o���h�ֿ�(�@����/�[��)=>");
	scanf_s("%f", &gas);
	printf("�п�J�A�������O=>");
	scanf_s("%f", &park);
	printf("�п�J�A���L���O=>");
	scanf_s("%f", &tolls);
	printf("�п�J�A���o��(�C���ɥi�H�]�X����)=>");
	scanf_s("%f", &a);
	cost = (milage / a)* gas + park + tolls;
	printf("�A���`���B��:%f",cost);
	system("pause");
	return 0;

}