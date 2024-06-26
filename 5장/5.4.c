/* ----------------------------------- 5.4 ---------------------------------- */
// cm로 표현된 키를 입력하여 피트와 인치로 변환하는 프로그램을 작성하시오. 1피트는 12인치이고 1인치는 2.54cm이다.

#include <stdio.h>

int main(void)
{
    double c,f,i;

    printf("키를 입력하시오(cm):");
    scanf("%lf",&c);
    
    i = c / 2.54; //인치
    f = i / 12; //피트
    i = i-((int)f*12); //피트로 변환한 후 인치

    printf("%.fcm는 %.f피트 %.2f인치 입니다.",c,f,i);

    return 0;
}