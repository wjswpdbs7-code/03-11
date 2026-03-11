//int로 점수를 입력받아 90점이상이면 a, 80점이상이면 b, 70점이상이면 c, 60점이상이면 d, 60점 미만이면 f를 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main(void)
{
  int score;
  char grade = 'f';
    printf("점수를 입력하세용");
    scanf("%d", &score);
    if(score >=90){
        grade = 'a';
    }
    else if(score >=80){
         grade = 'b';
    }
    else if(score >=70){
         grade = 'c';
    }
    else if(score >=60){
         grade = 'd';
    }
    else {
         grade = 'f';
    }
    printf("%d 는 %c 등급입니다.\n", score, grade);
    return 0;
}