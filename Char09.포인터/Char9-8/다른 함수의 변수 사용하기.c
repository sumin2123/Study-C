#include <stdio.h>

void swap(void);	// 두 변수의 값을 바꾸는 함수 선언

int main(void)
{
	int a = 10, b = 20;

	swap();		// 인수 없이 함수 호출
	printf("a: %d,b: %d, a, b");

	return 0;
}



void swap(void)	// 인수가 없기에 매개변수도 없음 
{
	int temp;	// 교환을 위한 변수

	temp = a;
	a = b;
	b = temp;
}
