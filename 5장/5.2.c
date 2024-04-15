/* ----------------------------------- 5.2 ---------------------------------- */
// 2개의 double 형의 실수를 읽어서 합, 차, 곱, 몫을 구하는 프로그램을 작성하라.

#include <stdio.h>

int main(void)
{
    double a,b;

    printf("실수를 입력하시오 :");
    scanf("%lf %lf",&a,&b);

    printf("%.2f %.2f %.2f %.2f",a+b,a-b,a*b,a/b); // 합,차,곱,몫

    return 0;
}