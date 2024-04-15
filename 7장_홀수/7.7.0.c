/* ----------------------------------- 7.7 ---------------------------------- */
#include <stdio.h>

int main(void){ //정방향 별
    int n,s;
    for(int i=1;i<=7;i++){
        for(int j=1;j<=i;j++){
            s='*';
            printf("%c",s);
        }
        printf("\n");
    }
    return 0;
}

