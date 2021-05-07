# Char10-1.배열과 포인터의 관계

### 1. 배열명에 정수 연산을 수행하여 배열 요소 사용

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10;	//ary[0] = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf_s("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i)); //ary[1]
	}

	return 0;
}
```







---

### 2. 배열명처럼 사용되는 포인터

```c
#include <stdio.h>

int main(void)
{
	int ary[3];			//배열선언
	int *pa = ary;		// 포인터에 배열명 저장
	int i;				// 반복 제어 변수

	*pa = 10;				// 첫 번째 배열 요소에 10 대입
	*(pa + 1) = 20;			// 두 번째 배열 요소에 20 대입
	pa[2] = pa[0] + pa[1];	// 대괄호를 써서 pa를 배열명처럼 사용

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}

	return 0;
}
```





---

### 3.  포인터를 이용한 배열의 값 출력

```c
#include <stdio.h>

int main(void)
{
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa);
		pa++;
	}

	return 0;
}
```





---

### 4. 포인터의 뺄셈과 관계연산

```c
#include <stdio.h> 

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary;
	int* pb = pa + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++;
	printf("pb-pa : %u\n", pb - pa);

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;
}
```











---

### 5. 배열의 값을 출력하는 함수



* 배열을 처리하는 함수

```c
#include <stdio.h>

void print_ary(int *pa);

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary);

	return 0;
}

void print_ary(int* pa)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]);
	}
}
```



---

### 6. 배열 요소의 개수가 다른 배열도 출력하는 함수



* 크기가 다른 배열을 출력하는 함수

```c
#include <stdio.h> 

void print_ary(int* pa, int size);

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70};

	print_ary(ary1, 5);
	printf("\n");
	print_ary(ary2, 7);

	return 0;

}

void print_ary(int* pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}
```



---

### 7. 배열에 값을 입력하는 함수



```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size)
{
	int i;
	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++)
	{
		scanf_s("%lf", pa + i);
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max)max = pa[i];

	}
	return max;
}
```







---
## 다음 Page [11강 문자](https://github.com/sumin2123/Study-C/blob/main/Char11.%EB%AC%B8%EC%9E%90/Char11.%EB%AC%B8%EC%9E%90/Char11.%EB%AC%B8%EC%9E%90.md)