/* ----------------------------------- 5.1 ---------------------------------- */
/*사용자로부터 2개의 정수를 입력받아서 첫 번째 정수를 두 번째 정수로 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성하시오.*/

#include <stdio.h>

int main(void)
{
    int a,b;

    printf("정수 2개를 입력하시오 :");
    scanf("%d %d",&a,&b); //한번에 입력

    printf("몫: %d\n나머지 %d",a/b,a%b); //몫, 나머지

    return 0;

}