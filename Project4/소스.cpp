#include <stdio.h>


int main(void)


{
	printf("4자리 정수 입력: 6527 \n");
	printf("%010d\n", 6527);
	printf("%+010d\n", 6527);
	printf("%-10d\n", 6527);
	printf("%10o\n", 6527);
	printf("%010o\n", 6527);
	printf("%10x\n", 6527);
	printf("%0#10x\n", 6527);
	printf("%0#x\n", 6527);
	return 0;

}