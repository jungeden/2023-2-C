/* ----------------------------------- 4.4 ---------------------------------- */
/*상자의 부피를 구하는 프로그램을 작성하여 보자. 
부피는 길이*너비*높이로 계산된다.
길이, 너비, 높이는 모두 double형의 실수로 입력받아 보자.*/

#include <stdio.h>

int main()
{
    double w,d,h; //가로,세로,높이
    double v;

    printf("상자의 가로 세로 높이를 한번에 입력:");
    scanf("%lf %lf %lf",&w,&d,&h);

    v = w * d * h; //부피

    printf("상자의 부피는%lf입니다.",v);

    return 0;

}