/* ---------------------------------- 4.10 ---------------------------------- */
//경보음이 울린 후에 다음과 같은 메시지를 출력하고 다시 경보음이 울리는 프로그램을 작성하여보자.

#include <stdio.h>

int main(void)
{
    char bbi = '\a';
    printf("%c",bbi); //경고음

    printf("화재가 발생하였습니다.");

    printf("%c",bbi); //경고음

    return 0;
}