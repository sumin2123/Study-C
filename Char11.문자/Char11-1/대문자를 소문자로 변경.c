#include <stdio.h>

int main(void)
{
	char small, cap = 'G';                  // char형 변수 선언과 초기화

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}

	printf("대문자 : %c %c", cap, '\n');    // '\n'를 %c로 출력하면 줄이 바뀐다.
	printf("소문자 : %c", small);

	return 0;
}