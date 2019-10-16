#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


int main(void)
{
	float temp;
	printf("화씨 온도를 소수 4째까지 출력");
	scanf("%f.4", &temp);

	temp = (9.0 / 5.0) * temp + 32;

	printf("%.4f\n", temp);


	return 0;
}