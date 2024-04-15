/* ---------------------------------- 7.11 ---------------------------------- */
#include <stdio.h>

int main(void){
    int o=100,u;
    printf("현재 연료량: %d\n",o);
    
    while (o>=0){
        
        printf("연료 충전은 +, 소모는 -로 입력헤주세요: "); scanf("%d",&u);
        if(u>500){
            printf("연료 탱크의 최대 용량은 500리터 입니다. 500리터 이상은 충전 할 수 없습니다.\n현재 충전 가능한 용량은 %d입니다.",500-o);   
        }
        else if(u>0){
            if(o+u>500){
                printf("현재 연료량: %d\n",o);
                printf("연료 탱크의 최대 용량은 500리터 입니다.\n현재 충전 가능한 용량은 %d입니다.",500-o);
            }
            else {
                o+=u;
                if(o>500){
                    printf("현재 연료량: %d\n",o);
                    printf("연료 탱크의 최대 용량은 500리터 입니다.\n더 충전 할 수 없습니다.");
                }
                else printf("현재 연료량: %d\n",o);
            }
        }   
        else if(u<0){
            if(o+u<0){
                printf("현재 연료량: %d\n",o);
                printf("연로 탱크에 연료가 부족합니다.\n현재 소모 가능한 용량은 %d입니다.",o);
            }
            else {
                o+=u;
                if(o+u<20){
                    printf("현재 연료량: %d\n",o);
                    printf("(경고) 연료가 20리터 미만입니다.");
                }
                else if(o+u==0) printf("연료가 모두 소진되었습니다.");
                else  printf("현재 연료량: %d\n",o);
            } 
        }
    }
    return 0; 
}