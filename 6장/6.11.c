/* ---------------------------------- 6.11 ---------------------------------- */
/* 사용자로부터 하나의 문자를 입력받아서 문자가 'R'이나 'r'이면 “Rectangle”이라고 출력한다. 
'T'이거 나 't'이면 “Triangle", 'c'이거나 'C'이면 “circle"이라고 출력하는 프로그램을 작성한다. 
그 외의 문 자가 들어오면 “Unknown"이라고 출력한다. */

#include <stdio.h> 

int main(void)
{
    char a;

    printf("문자를 입력하시오 :"); scanf("%c",&a);

    if(a=='R' || a=='r') printf("Rectangle"); //사각형
    else if(a=='T' || a=='t') printf("Triangle"); //삼각형
    else if(a=='C' || a=='c') printf("circle"); //원
    else printf("Unknown"); 

    return 0;
}
