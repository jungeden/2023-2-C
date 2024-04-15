/* ---------------------------------- 7.13 ---------------------------------- */
#include <stdio.h>

int main(void){
    int sum=0,i=0;
    while (sum<10000){
        i+=1;
        sum+=i;
        if(sum>10000){
            sum-=i;
            i-=1;
            printf("1부터 %d까지의 합이 %d입니다.",i,sum);
            break;
        }   
    }
    return 0;
}