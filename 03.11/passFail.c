//60점이상이면 합격 60점이하면 탈락

#include <stdio.h>

int main(void)
{
    int score;
    printf("점수를 입력하세요 :");
    scanf("%d", &score);

    if(score >=60){
        printf("점수: %d --- 합격\n", score);
    }
    else{
      printf("점수: %d --- 불합격\n", score);
    }
    return 0;
}