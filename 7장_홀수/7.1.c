/* ----------------------------------- 7.1 ---------------------------------- */
#include <stdio.h>
#include <unistd.h> //mac에서는 sleep함수 쓰기위해 이거 써야함. window는 #include <windows.h>(Sleep)나 <stdlib.h>(_sleep)쓸 수 있음. 

int main(void){
    int t;

    printf("카운터의 초기값을 입력하시오(단위: 초): "); scanf("%d",&t);

    for (int i=t;i>0;i-=1){
        if (t==0) printf("\a");
        else{
            printf("%d ",i); //출력하면서 실행되게는 못하나?
            sleep(1);
            }
    }
    return 0;
}
