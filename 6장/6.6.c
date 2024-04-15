/* ----------------------------------- 6.6 ---------------------------------- */
//키보드에서 하나의 문자를 읽어서 모음과 자음을 구분하는 프로그램을 작성하여보자. 단 switch문을 사용한다.
#include <stdio.h>

int main(void)
{
    char c;
    //getchar();
    //c=getchar();

    printf("문자를 입력하시오:"); scanf("%c",&c);

    switch (c)
    {
    case 'a':
        printf("모음입니다.");
        break;
    case 'e':
        printf("모음입니다.");
        break;
    case 'i':
        printf("모음입니다.");
        break;
    case 'o':
        printf("모음입니다.");
        break;
    case 'u':
        printf("모음입니다.");
        break;
    default: //나머지 다 자음
        printf("자음입니다.");
        break;
    }
    return 0;
}