# Char14.다차원배열, 포인터배열

### 1. 2차원 배열 선언과 요소 사용

* 학생 3명의 4과목 총점과 평균을 구하는 프로그램

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
	int score[3][4];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("4과목의 점수 입력 : ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);
	}

	return 0;
}
```





---

### 2. 2차원 배열 초기화



```c
#include <stdio.h> 

int main(void)
{
	int num[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}

	return 0;
}
```







---

### 3.  2차원 char 배열

* 여러 개의 동물 이름을 입출력

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{
	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);
	for (i = 0; i < count; i++)
	{
		scanf("%s ", animal[i]);
	}

	for (i = 0; i < count; i++)
	{
		printf("%s ", animal[i]);
	}

	return 0;
}
```



---

### 4. 2차원 char 배열 초기화

* 2차원 char배열에 동물 이름을 초기화하는 방법

```c
#include <stdio.h>

int main(void)
{
	char animal[5][10] = {
		{'d','o','g','\0'},
		{'t','i','g','e','r','\0'},
		{'r','a','b','b','i','t','\0'},
		{'h','o','r','s','e','\0'},
		{'c','a','t','\0'},
	};
	//문자열 상수로 한 행씩 초기화, 행의 수 생략 가능
	char animal2[][10] = { "dog","tiger","rabbit","horse","cat" };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%s", animal[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s", animal2[i]);
	}

	return 0;
}
```





---

### 5. 3차원 배열

* 2개반 3명의 4과목 점수 저장 3차원 배열

```c
#include <stdio.h> 

int main(void)
{
	int score[2][3][4] = {
		{{72,80,95,60}, {68,98,83,90},{75,72,84,90}},
		{{66,85,90,88}, {95,92,88,95}, {43,72,56,75}}
	};

	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		printf("%d반 점수...\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
```





---

### 6. 포인터 배열

* 포인터 배열로 여러 문자열 출력

```c
#include <stdio.h>

int main(void)
{
	char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}

	return 0;

}
```





---

### 7. 2차원 배열처럼 활용하는 포인터 배열

* 여러 개의 1차원 배열을 2차원 배열처럼 사용

```c
#include <stdio.h> 

int main(void)
{
	int ary1[4] = { 1, 2, 3, 4 };
	int ary2[4] = { 11, 12, 13, 14 };
	int ary3[4] = { 21, 22, 23, 24 };
	int *pary[3] = { ary1, ary2,ary3 };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}

	return 0;
}
```



---



### [ 다음 Page Char15. 응용포인터](https://github.com/sumin2123/Study-C/blob/main/Char15.%EC%9D%91%EC%9A%A9%ED%8F%AC%EC%9D%B8%ED%84%B0/Char15.%EC%9D%91%EC%9A%A9%ED%8F%AC%EC%9D%B8%ED%84%B0.md)