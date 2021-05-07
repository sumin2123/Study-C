### 1.동적 할당한 저장공간을 사용하는 프로그램



```c
#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));	// 형 변환 생략 가능하지만 적어줘라
	if (pi == NULL)
	{
		printf("#메모리가 부족합니다.\n");
		exit(1);
	}

	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %.1lf\n", *pd);

	free(pi);
	free(pd);

	return 0;

}
```



---

### 2. 동적할당 영역을 배열처럼 사용



```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL);
	{
		printf("메모리가 부족합니다 !\n");
		exit(1);
	}
	printf("다섯 명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++);
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}
	printf("다섯 명의 평균 나이 : %1.lf\n", (sum / 5.0));
	free(pi);

	return 0;
}
```





---

### 3. calloc,realloc



```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi;
	int size = 5;
	int count = 0;
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("양수만 입력하세요 => ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size)break;
		{
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;

	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);
	return 0;
}
```





---

### 4. 3개의 문자열을 저장하기 위한 동적 할당



```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char temp[80];
	char* str[3];
	int i;

	for (i= 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);
		str[i] = (char *)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}

	return 0;
}
```



---

### 5. 동적 할당 영역의 문자열을 함수로 출력



```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void print_str(char** ps);

int main(void)
{
	char temp[80];
	char* str[21] = { 0 };
	int i = 0;

	while (i<20)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);
		if (strcmp(temp, "end") == 0)break;
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;

	}
	print_str(str);

	for (i = 0; str[i] != NULL; i++) {
		free(str[i]);
	}

	return 0;
}

void print_str(char** ps)
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;

	}
}
```



### [ 다음 Page. Char17. 사용자 정의 자료형 ](https://github.com/sumin2123/Study-C/blob/main/Char17.%EC%82%AC%EC%9A%A9%EC%9E%90%20%EC%A0%95%EC%9D%98%20%EC%9E%90%EB%A3%8C%ED%98%95/Char17.%EC%82%AC%EC%9A%A9%EC%9E%90%20%EC%A0%95%EC%9D%98%20%EC%9E%90%EB%A3%8C%ED%98%95.md)
