#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


int main(void)
{
	float temp;
	printf("ȭ�� �µ��� �Ҽ� 4°���� ���");
	scanf("%f.4", &temp);

	temp = (9.0 / 5.0) * temp + 32;

	printf("%.4f\n", temp);


	return 0;
}