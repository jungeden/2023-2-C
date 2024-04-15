/* ----------------------------------- 7.5 ---------------------------------- */

#include <stdio.h> //????

int main(void){
    int r,n,a=1;

    printf("실수의 값을 입력하시오: "); scanf("%d",&r);
    printf("거듭 제곱의 횟수를 입력하시오: "); scanf("%d",&n);
    for (int i=1;i<n;i++) {
        a*=r;
    }
    printf("결과 값은 %d",r);

    return 0;
}