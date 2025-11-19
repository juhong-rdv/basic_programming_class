#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    int ball[3];
    srand(time(NULL));

    do {
        int ball1 = rand() % 10 + 1;
        int ball2 = rand() % 10 + 1;
        int ball3 = rand() % 10 + 1;
    } while (ball[0] == ball[1] || ball[0] == ball[2] || ball[1] == ball[2]);

    printf("baseball : %d %d\n", ball[0], ball[1], ball[2]);

    //3개의 숫자를 입력
    int input ;
    printf("Enter the first number: ");
    scanf("%d", input[0]);

    printf("Enter the second number: ");
    scanf("%d", input[1]);

    printf("Enter the third number: ");
    scanf("%d", input[2]);

    printf("input : %d %d %d\n", input[0], input[1], input[2])

    if( ball[0] == input[0] || ball[1] == input[1] || ball[2] == input[2] )
    {
	    printf("Home Run~"\n) ;
    }

    return 0;
}



