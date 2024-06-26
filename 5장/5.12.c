/* ---------------------------------- 5.12 ---------------------------------- */
/* 비트 이동 연산을 이용하여 문자 4개를 받아서 하나의 unsigned int형의 변수 안에 저장하는 프로그램을 작성하라. 
첫 번째 문자는 비트 0부터 비트 7까지에 저장되고 두 번째 문자는 비트 8부터 비트 15까지 
세 번째 문자는 비트 16에서 비트 23까지, 네 번째 문자는 비트 24부터 비트 31까지에 저장 된다. 
결과로 생성되는 정수값은 16진수로 출력하도록 한다. 비트 이동 연산과 비트 OR 연산을 사용 하라. */

#include <stdio.h>

int main()
{
    char a,b,c,d;
    unsigned int e = 0;

    printf("첫 번째 문자를 입력하시오: "); scanf(" %c", &a); //scanf("%c",&a) 하면 왜 안되지?
    
    printf("두 번째 문자를 입력하시오: "); scanf(" %c", &b);
    
    printf("세 번째 문자를 입력하시오: "); scanf(" %c", &c);
    
    printf("네 번째 문자를 입력하시오: "); scanf(" %c", &d);
    
    e = e|a;
    e = b<<8|e; //비트 8~
    e = c<<16|e; //비트 16~
    e = d<<24|e; //비트 24~

    printf("결과값 :%x",e);

    return 0;
}