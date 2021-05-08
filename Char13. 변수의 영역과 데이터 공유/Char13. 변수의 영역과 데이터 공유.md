# Char13. 변수의 영역과 데이터 공유

### 1. 같은 지역변수 사용하기

```c
#include <stdio.h>

void assign(void);

int main(void)
{
	auto int a = 0;

	assign();
	printf("main 함수 a : %d\n", a);

	return 0;
}

void assign(void)
{
	int a;

	a = 10;
	printf("assign 함수 a : %d\n", a);

```





---

### 2. 블록 안 지역 변수 사용

```c
#include <stdio.h> 

int main(void)
{
	int a = 10, b = 20;

	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
	{
		int temp;

		temp = a;
		a = b;
		b = temp;

	}
	printf("교환 후 a와 b의 값 : %d, %d\n", a, b);

	return 0;
}
```



---

### 3. 전역변수 사용

```c
#include <stdio.h> 

void assign10(void);
void assign20(void);

int a;

int main(void)
{
	printf("함수 호출 전 a 값 : %d\n", a);

	assign10();
	assign20();

	printf("함수 호출 후 a 값 : %d\n", a);

	return 0;
}

void assign10(void)
{
	a = 10;
}

void assign20(void)
{
	int a;

	a = 20;
}
```





---

### 4. auto지역변수 static지역 변수 비교

```c
#include <stdio.h>

void auto_func(void);
void static_func(void);

int main(void)
{
	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++) {
		static_func();
	}

	return 0;
}

void auto_func(void)
{
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_func(void)
{
	static int a;

	a++;
	printf("%d\n", a);
}
```







---

### 5. 레지스터 변수를 반복문에 사용

```c
#include <stdio.h> 

void assign10(void);
void assign20(void);

int a;

int main(void)
{
	printf("함수 호출 전 a 값 : %d\n", a);

	assign10();
	assign20();

	printf("함수 호출 후 a 값 : %d\n", a);

	return 0;
}

void assign10(void)
{
	a = 10;
}

void assign20(void)
{
	int a;

	a = 20;
}
```





---

### 6. 10을 더하기 위해 값을 인수로 주는 경우

```c
#include <stdio.h> 

void add_ten(int a);

int main(void)
{
	int a = 10;

	add_ten(a);
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)
{
	a = a + 10;
}
```





---

### 7. 포인터 사용해서 변수 더하기

```c
#include <stdio.h> 

void add_ten(int* pa);

int main(void)
{
	int a = 10;

	add_ten(&a);
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int* pa)
{
	*pa = *pa + 10;
}
```





---

### 8. 주소 반환하여 두 정수의 합 계산

```c
#include <stdio.h>

int* sum(int a, int b);

int main(void)
{
	int* resp;
	resp = sum(10, 20);
	printf("두 정수의 합 : %d\n", *resp);

	return 0;
}

int* sum(int a, int b)
{
	static int res;  // 정적 지역 변수

	res = a + b;

	return &res;

}
```






---
### 다음 Page [14강 다차원배열, 포인터배열](https://github.com/sumin2123/Study-C/blob/main/Char14.%EB%8B%A4%EC%B0%A8%EC%9B%90%EB%B0%B0%EC%97%B4%2C%20%ED%8F%AC%EC%9D%B8%ED%84%B0/Char14.%EB%8B%A4%EC%B0%A8%EC%9B%90%EB%B0%B0%EC%97%B4%2C%20%ED%8F%AC%EC%9D%B8%ED%84%B0%EB%B0%B0%EC%97%B4.md)