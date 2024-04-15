/* ---------------------------------- 7.17 ---------------------------------- */
#include <stdio.h> //오류해결

int main(void){

    char u;
    int a,b;
    while (1){
        printf("************************\n");
        printf("A----Add\n");
        printf("S----Subtract\n");
        printf("M----Multiply\n");
        printf("D----Divide\n");
        printf("Q----Quit\n");
        printf("************************\n");

        printf("연산을 선택하시오: "); scanf(" %c",&u);
       
       switch (u){
        case 'A':
            printf("두 수를 공백으로 분리하여 입력하시오: "); scanf("%d %d",&a,&b);
            printf("%d\n",a+b);
            break;

        case 'S':
            printf("두 수를 공백으로 분리하여 입력하시오: "); scanf("%d %d",&a,&b);
            printf("%d\n",a-b);
            break;

        case 'M':
            printf("두 수를 공백으로 분리하여 입력하시오: "); scanf("%d %d",&a,&b);
            printf("%d\n",a*b);
            break;

        case 'D':
            printf("두 수를 공백으로 분리하여 입력하시오: "); scanf("%d %d",&a,&b);
            printf("%d\n",a/b);
            break;

        case 'Q':
            printf("프로그램이 종료되었습니다.");
            return 0;

        default:
            printf("\nA,S,M,D,Q 중 입력하시오.\n");
            break;
        }
        // 입력 버퍼 비우기
        while (getchar() != '\n');
    }
    return 0;
}


 /*
        if(u=='A'){
            printf("두 수를 공백으로 분리하여 입력하시오: "); scanf("%d %d",&a,&b);
            printf("%d\n",a+b);
        }
        else if(u=='S'){
            printf("두 수를 공백으로 분리하여 입력하시오: "); scanf("%d %d",&a,&b);
            printf("%d\n",a-b);
        }
        else if(u=='M'){
            printf("두 수를 공백으로 분리하여 입력하시오: "); scanf("%d %d",&a,&b);
            printf("%d\n",a*b);
        }
        else if(u=='D'){
            printf("두 수를 공백으로 분리하여 입력하시오: "); scanf("%d %d",&a,&b);
            printf("%d\n",a/b);
        }
        else if(u=='Q'){
            printf("프로그램이 종료되었습니다.");
            break;
        }
        else printf("A,S,M,D,Q 중 입력하시오.\n");
        */