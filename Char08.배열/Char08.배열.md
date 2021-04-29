### 1. 배열의 선언

* 5명의 나이를 저장할 배열 선언하고, 사용하는 방법

  ```c
  #include <stdio.h>
  
  int main(void)
  {
  	int ary[5];
  
  	ary[0] = 10;
  	ary[1] = 20;
  	ary[2] = ary[0] + ary[1];
  	scanf("%d", &ary[3]);
  
  	printf("%d\n", ary[2]);
  	printf("%d\n", ary[3]);
  	printf("%d\n", ary[4]);
  
  	return 0;
  
  }
  ```









---

### 2. 배열의 초기화













---

### 3. 배열과 반복문



* 배열과 반복문을 사용한 성적 처리 프로그램

```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}
```





---

### 4. Sizeof 연산자를 활용한 배열 처리





* sizeof 연산자를 사용한 배열

  ```c
  #define _CRT_SECURE_NO_WARNINGS
  #include <stdio.h>
  
  int main(void)
  {
  	int score[5];
  	int i;
  	int total = 0;
  	double avg;
  	int count;
  
  	count = sizeof(score) / sizeof(score[0]);
  
  	for (i = 0; i < count; i++)
  	{
  		scanf("%d", &score[i]);
  	}
  
  	for (i = 0; i < count; i++)
  	{
  		total += score[i];
  	}
  	avg = total / (double)count;
  
  	for (i = 0; i < count; i++)
  	{
  		printf("%5d", score[i]);
  	}
  	printf("\n");
  
  	printf("평균 : %.1lf\n", avg);
  
  	return 0;
  }
  ```

  