/* ----------------------------------- 6.5 ---------------------------------- */
//사용자로부터 몇 월인지를 정수로 입력받아서 Jan와 같은 영어단어로 출력하는 프로그램을 작성하라.
#include <stdio.h>

int main(void)
{
    int m;

    printf("월 번호를 입력하시오:"); scanf("%d",&m);

    switch (m)
    {
    case 1:
        printf("Jan"); //1
        break;
    case 2:
        printf("Feb"); //2
        break;
    case 3:
        printf("Mar"); //3
        break;
    case 4:
        printf("Apr"); //4
        break;
    case 5:
        printf("May"); //5
        break;
    case 6:
        printf("Jun"); //6
        break;
    case 7:
        printf("Jul"); //7
        break;
    case 8:
        printf("Aug"); //8
        break;
    case 9:
        printf("Sep"); //9
        break;
    case 10:
        printf("Oct"); //10
        break;
    case 11:
        printf("Nov"); //11
        break;
    case 12:
        printf("Dec"); //12
        break;
    default:
        break;
    }
}