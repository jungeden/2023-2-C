/* ---------------------------------- 7.15 ---------------------------------- */
#include <stdio.h>

int main(void){
    int n,r,i,a=1;
    printf("n의 값: "); scanf("%d",&n);
    printf("r의 값: "); scanf("%d",&r);

    for(int i=n;i>=(n-r+1);i--){
        a*=i;
    }
    printf("순열의 값은 %d입니다.",a);
    return 0;
}