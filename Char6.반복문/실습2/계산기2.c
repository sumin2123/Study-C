#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c, d;
	int a, b;

	
	while (1)
	{
		printf("계산하려는 값을 입력하세요. ex) 10+20 ");
		scanf_s("%d%c%d", &a, &c, &b);

		printf("끝내려면 'end'를 입력하세요.");
		scanf_s("%s", &d);
		if (d == "end") break;

		switch (c)
		{
		case '+':
			printf("덧셈의 결과는 %d 입니다.\n", a + b);
			break;

		case '-':
			printf("뺄셈의 결과는 %d 입니다.\n", a - b);
			break;

		case '*':
			printf("곱셈의 결과는 %d 입니다.\n", a * b);
			break;

		case '/':
			printf("나눗셈의 결과는 %lf 입니다.", (double)a / b);
			break;

		default:
			printf("다시 입력하세요");
			break;
		}
		

	}
	return 0;
}

	
