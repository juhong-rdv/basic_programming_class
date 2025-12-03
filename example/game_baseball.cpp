#include <stdio.h>      //ㅐPRINTF, scanf를 사용하기 위해서 헤더 추가
#include <stdlib.h>    // rand, srand를 사용하기 위해서 헤더 추가
#include <time.h>   // time 함수를 사용하기 위해서 헤더 추가

int main(void)      //프로그램을 실행하는 main 함수
{                   //메인함수의 시작
    int ball[3]; // 3개의 난수 저장 배열
    srand(time(NULL)); // 난수 초기화
    // 중복 없는 3자리 난수 생성
    do {
        ball[0] = rand() % 10;
        ball[1] = rand() % 10;
        ball[2] = rand() % 10;
    } while (ball[0] == ball[1] || ball[0] == ball[2] || ball[1] == ball[2]);

    //printf("baseball : %d %d %d\n", ball[0], ball[1], ball[2]); // 정답 확인용(테스트시만)

    int input[3];
    int strike_count = 0 ;
    int ball_count = 0 ; 
    int out_count = 0;
    int try_count = 0;

    while (1) {
        printf("\n숫자 3개를 입력하세요 (공백으로 구분): ");
        scanf("%d %d %d", &input[0], &input[1], &input[2]);

        strike_count = 0;
        ball_count = 0;

        // strike, ball 판정
        for (int i = 0; i < 3; i++) {
            if (input[i] == ball[i]) {
                strike_count++;
            } else if (input[i] == ball[(i+1)%3] || input[i] == ball[(i+2)%3]) {
                ball_count++;
            }
        }

        out_count = 3 - (strike_count + ball_count);
        
        try_count++;

        if (strike_count == 3) {
            printf("Home Run! %d번 만에 맞췄습니다!\n", try_count);
            break;
        } else {
            printf("%d Strike, %d Ball, %d Out\n", strike_count, ball_count, out_count);
        }
    }
    return 0;
}


