#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b, char c);
int sub(int a, int b, char c);
int mun(int a, int b, char c);
double min(int a, int b, char c);

int main(void)
{
	int a, b;
	char c;
	int resultsum, resultsub, resultmun;
	double resultmin;

	printf("+ , - , * , / \n");
	printf("연산자를 선택해주세요:");
	scanf("%c", &c);

	printf("두 개의 수를 입력해주세요 :\n");
	scanf("%d %d", &a, &b);

	switch (c) 
	{
	case '+':
		resultsum = sum(a, b, c);
		printf("%d + %d = %d", a, b, resultsum);
		break;
	case '-':
		resultsub = sub(a, b, c);
		printf("%d - %d = %d", a, b, resultsub);

		break;
	case '*':
		resultmun = mun(a, b, c);
		printf("%d * %d = %d", a, b, resultmun);

		break;
	case '/':
		resultmin = min(a, b, c);
		printf("%d / %d = %lf", a, b,resultmin);

		break;

	default:
		printf("ERROR");
		break;
	}


	return 0;
}

int sum(int a, int b, char c)
{

	int resultsum;

	if (c == '+')
	{
		resultsum = a + b;
	}

	return resultsum;
}

int sub(int a, int b, char c)
{
	int resultsub;
	if (c == '-')
	{
		resultsub = a - b;
	}
	return resultsub;
}

int mun(int a, int b, char c)
{	
	int resultmun;
	if (c == '*')
	{
		resultmun = a * b;
	}
	return resultmun;
}

double  min(int a, int b, char c)
{
	double resultmin;
	if (c == '/')
	{
		resultmin = (double)a/(double)b;
	}
	return resultmin;
}
