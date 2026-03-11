//int로 점수를 입력받아 90점이상이면 a, 80점이상이면 b, 70점이상이면 c, 60점이상이면 d, 60점 미만이면 f를 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main(void)
{
  int score;
  char grade = 'f';
    printf("점수를 입력하세용");
    scanf("%d", &score);
    
    switch(score/10)//score를 10으로 나눈 몫을 기준으로 등급을 결정합니다. 예를 들어, score가 95인 경우, score/10은 9가 되고, case 9가 실행되어 grade가 'a'로 설정됩니다.
    {
      //100일때 f가 뜨지 않으려면 
        case 10:
         grade = 'a';
         break;
         //100 보다 높은 모든 경우 101.200....등에a가 뜨도록 90이상은 a로 하기위해 case에 >를써도 
         //안되고 case 10을 추가해줘야 합니다. 그럼 110은 case11 120은 case12 이렇게 전부 추가해야 하는데,
         //이런 경우 default에 grade='a'로 설정하면 f는
        case 9:
            grade = 'a';
            break;
        case 8:
            grade = 'b';
            break;//switch문에서 break문은 각 case 블록이 끝난 후에 switch문을 빠져나가도록 하는 역할을 합니다. 만약 break문이 없다면, 
                  //해당 case 블록이 실행된 후에도 다음 case 블록들이 연속적으로 실행되는 "fall-through" 현상이 발생할 수 있습니다. 
                  //예를 들어, score가 95인 경우, case 9가 실행되어 grade가 'a'로 설정된 후에도 break문이 없으면 
                  //case 8, case 7, case 6, default까지 모두 실행되어 grade가 'f'로 덮어쓰여질 수 있습니다. 
                  //따라서 각 case 블록이 끝난 후에는 반드시 break문을 사용하여 switch문을 빠져나가는 것이 중요합니다.
        case 7:
            grade = 'c';
            break;
        case 6:
            grade = 'd';
            break;
        default://는 switch문에서 case에 해당하지 않는 모든 경우를 처리하는 역할을 합니다. score가 60 미만인 경우에는
        //case 5, case 4, case 3, case 2, case 1, case 0이 모두 해당하지 않으므로 default 블록이 실행되어 grade가 'f'로 설정됩니다.
        //100이상인 경우에는 case 10이 해당하지 않으므로 default 블록이 실행되어 grade가 'f'로 설정됩니다. 따라서 default 블록은 score가 60 미만이거나 100 이상인 경우에 grade를 'f'로 설정하는 역할을 합니다.
        //만약 100이상의 모든 경우에 grade가 'a'로 설정되도록 하려면, case 10을 제거하고 default 블록에서 grade를 'a'로 설정하면 됩니다. 이렇게 하면 score가 100 이상인 경우에도 grade가 'a'로 설정되고, score가 60 미만인 경우에는 grade가 'f'로 설정됩니다.
            grade = 'f';
            grade = 'a';
    }
    printf("%d 는 %c 등급입니다.\n", score, grade);
    return 0;
}