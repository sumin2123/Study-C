#include <stdio.h>

int get_num(void); //함수 선언

int main(void)
{
	int result;

	result = get_num();
	printf("변환값 : %d\n", result);
	
	return 0;
}

int get_num(void)
{
	int num;

	printf("양수 입력 : ");
	scnaf("%d", &num);

	return num;
}

int get_num(void)
{
	return 0;
}
