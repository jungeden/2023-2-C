/* ----------------------------------- 6.2 ---------------------------------- */
//사용자로부터 3개의 정수를 읽어 들인 후에 it-else 문을 사용하여 가장 작은 값을 결정하는 프로그램을 작성하라.

#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("정수 3개를 입력하시오:"); scanf("%d %d %d",&a,&b,&c);

    if (a<b) //a<b
    {
        if(a<c) printf("제일 작은 정수는 %d입니다.",a); //a<c
        else printf("제일 작은 정수는 %d입니다.",c); //c<a
    }
    else //b<a
    {
        if(b<c) printf("제일 작은 정수는 %d입니다.",b); //b<c
        else printf("제일 작은 정수는 %d입니다.",c); //c<b
    }
    return 0;
}