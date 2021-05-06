#include <stdio.h>



int main(void) {



    int arr[5][5];
    int sum = 0;



    printf("국어, 영어, 수학, 도덕점수를 입력하세요.\n");



    //사용자로부터 점수를 입력받음
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf_s("%d", &arr[i][j]);

    //학생총점을 계산하여 저장
    for (int i = 0; i < 4; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
            arr[i][4] = sum;//각 행의 마지막 인덱스에 학생의 총점을 저장
        }
    }



    //과목총점을 계산하여 저장
    for (int i = 0; i < 4; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += arr[j][i];//반복문을 통해 배열위치를 적절히 설정
            arr[4][i] = sum;//각 열의 마지막 인덱스에 과목의 총점을 저장
        }
    }
    //배열의 마지막 값을 0으로 하여 null값을 입력
    arr[4][4] = 0;//0으로 해주지 않을경우 쓰레기 값으로 초기화 됨



//배열전체 출력
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            //%3d는 %d를 출력할 때 띄어쓰기(스페이스바)를 3번하고 출력하겠다는 의미
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}


