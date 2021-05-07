### 1. 대문자를 소문자로 변경

```c
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
```



---

### 2. 공백이나 제어 문자의 입력

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch1, ch2;

	scanf("%c%c", &ch1, &ch2);

	printf("[%c%c]", ch1, ch2);

	return 0;
}
```



---

### 3. getchar함수와 putchar함수 사용

```c
#include <stdio.h>

int main(void)
{
	int ch;

	ch = getchar();
	printf("입력한 문자 : ");
	putchar(ch);
	putchar('\n');

	return 0;
}
```







---

### 4. 버퍼를 사용하는 문자 입력

```c
#include <stdio.h> 

int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 3; i++) {
		scanf("%c", &ch);
		printf("%c", ch);
	}

	return 0;
}
```



---

### 5. 입력 문자의 아스키 코드 갑을 출력하는 프로그램

```c
#include <stdio.h>

int main(void)
{
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);
		if (res == -1) break;
		printf("%d", ch);
	}

	return 0;
}
```





---

### 6. getchar함수를 사용한 문자열 입력

```c
#include <stdio.h> 

void my_gets(char* str, int size);

int main(void)
{
	char str[7];

	my_gets(str, sizeof(str));
	printf("입력한 문자열 : %s\n", str);

	return 0;
}

void my_gets(char* str, int size)
{
	int ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1));
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
}

```





---

### 7. 버퍼의 내용을 지워야 하는 경우

```c
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, grade;

	printf("학번 입력 : ");
	scanf("%d", &num);
	getchar();
	printf("학점 입력 : ");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}

```







---
## 다음 Page [12강 문자열](https://github.com/sumin2123/Study-C/blob/main/Char12.%EB%AC%B8%EC%9E%90%EC%97%B4/Char12.%EB%AC%B8%EC%9E%90%EC%97%B4.md)

