/* ----------------------------------- 6.4 ---------------------------------- */
/*놀이 공원에서 롤러코스터에 타려면 키가 140cm 이상이고 나이가 10살 이상이어야 한다고 가정하자.
사용자에게 키와 나이를 질문한 후에 "타도 좋습니다" 또는 "죄송합니다"를 출력하는 프로그램을 작성하여보자.*/

#include <stdio.h>

int main(void)
{
    int a,b;

    printf("키를 입력하시오(cm): "); scanf("%d",&a); //키
    printf("나이를 입력하시오: "); scanf("%d",&b); //나이

    if(a>=140 && b>=10) printf("타도 좋습니다."); //140cm이상 10세이상
    else printf("죄송합니다.");

    return 0;
}