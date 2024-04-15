/* ----------------------------------- 7.7 ---------------------------------- */
#include <stdio.h>

int main(void){ //역방향 별
    int n,b,s;
    for(int i=7;i>=1;i--){
        for(int j=i;j>=1;j--){
            b=' ';
            printf("%c",b);
        }
        for(int j=0;j<=7-i;j++){
            s='*';
            printf("%c",s);
        }
        printf("\n");
    }
    return 0;
}

