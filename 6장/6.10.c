/* ---------------------------------- 6.10 ---------------------------------- */
/* (x, y) 좌표를 입력받아서 좌표가 속하는 사분면을 화면에 출력하는 프로그램을 작성하시오. */

#include <stdio.h>

int main(void)
{
    int x,y;

    printf("x,y좌표를 입력하시오 :"); scanf("%d",&x,&y);

    if(x>0 && y>0) printf("1사분면입니다."); //1사분면
    else if(x>0 && y<0) printf("2사분면입니다."); //2사분면
    else if(x<0 && y>0) printf("3사분면입니다."); //3사분면
    else printf("4사분면입니다."); //4사분면

    return 0;
}