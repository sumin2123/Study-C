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

```c
ary[0] = 10;
ary[1] = 20
ary[2] = 30
ary[3] = 40
ary[4] = 50;
ary[5] = 60;
```











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

  
  
  ---
  
  ###  5. 문자열을 저장하는 char형 배열
  
  ```c
  #include <stdio.h> 
  
  int mian(void)
  {
  	char str[80] = "applejam";
  
  	printf("최초 문자열 : %s\n", str);
  	printf("문자열 입력 : ");
  	scanf("%s", str);
  	printf("입력 후 문자열 : %s\n", str);
  
  	return 0;
  }
  ```
  
  
  
  
  
  
  
  ---
  
  ### 6. 문자열을 대입하는 strcpy 함수
  
  ```c
  #include <stdio.h>
  #include <string.h>
  
  int main(void)
  {
  	char str1[80] = "cat";
  	char str2[80];
  
  	strcpy(str1, "tiger");
  	strcpy(str2, str1);
  	printf("%s, %s\n", str1, str2);
  
  	return 0;
  }
  ```
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  ---
  
  ### 7. 빈칸을 포함한 문자열 입력
  
  ```c
  #include <stdio.h> 
  
  int main(void)
  {
  	char str[80];
  
  	printf("문자열 입력 : ");
  	gets(str);
  	puts("입력된 문자열: ");
  	puts(str);
  
  	return 0;
  }
  ```
  
  
  
  
  
  
  
  ---
  
  ### 8. 널 문자가 없는 문자열
  
  ```c
  #include <stdio.h> 
  
  int main(void)
  {
  	char str[5];
  
  	str[0] = 'O';
  	str[1] = 'K';
  	printf("%s\n", str);
  
  	return 0;
  }
  ```
  
  
  
  
  
  
  
  
  
  ## 다음 Page [9강 포인터](https://github.com/sumin2123/Study-C/blob/main/Char09.%ED%8F%AC%EC%9D%B8%ED%84%B0/9.%ED%8F%AC%EC%9D%B8%ED%84%B0.md#1-%ED%8F%AC%EC%9D%B8%ED%84%B0%EC%9D%98-%EA%B8%B0%EB%B3%B8-%EA%B0%9C%EB%85%90)