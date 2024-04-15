/* ----------------------------------- 7.8 ---------------------------------- */
//중첩 반복문을 사용하여서 다음과 같이 출력하는 프로그램을 작성하여보자.

#include <stdio.h>

int main(void){
    int a;

    printf("정수를 입력하시오: "); scanf("%d",&a);

    for(int i=1;i<=a;i++){ //a이하 수
        for(int j=1;j<=i;j++){ 
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}