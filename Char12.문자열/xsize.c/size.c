#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str1;
	
	printf("문자를 입력하세요 : ");
	scanf_s("%c", &str1);

		if ((str1 >= 'A') && (str1 <= 'Z'))
		{
			printf("소문자로 바뀐 문자 : %c\n", str1 + 32);
		}
		else if ((str1 >= 'a') && (str1 <= 'z'))
		{
			printf("대문자로 바뀐 문자 : %c", str1 - 32);
		}
		else
		{
			printf("문자를 제대로 입력해주세요!!!");
		}

	// 소문자 >> 대문자로 변형 해주려면 -32
	// 대문자 >> 소문자로 변형 해주려면 +32


	return 0;
}