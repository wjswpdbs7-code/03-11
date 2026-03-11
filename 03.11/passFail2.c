

#include <stdio.h>
#include <stdlib.h>//argc, argv 사용하기 위해 추가

int main(int argc, char *argv[]) //argc역할과 argv역할 각각 설명하자면 
//argc는 명령행 인자의 개수를 나타내며, argv는 명령행 인자들을 문자열 배열로 저장하는 포인터입니다.
//[]는 argv 배열을 가리키는 포인터입니다.
// argc는 명령행 인자의 개수를 나타내며, argv는 명령행 인자들을 문자열 배열로 저장하는 포인터입니다.
//이 문서에서는 명령행 인자를 사용하여 점수를 입력받아 합격 여부를 판단하는 프로그램을 작성할 것입니다.
//그냥 scanf쓰는것보다 좋은게뭐임?
//명령행 인자를 사용하면 프로그램을 실행할 때 점수를 직접 입력할 수 있어서 편리합니다. 또한, 여러 번 실행할 때마다 점수를 입력하는 번거로
//움을 줄일 수 있습니다. 반면에 scanf를 사용하면 프로그램 실행 중에 점수를 입력해야 하므로, 여러 번 실행할 때마다 입력해야 하는 번거로움이 있습니다.
{
    int score = atoi(argv[1]);
    int score2 = atoi(argv[2]);


    if(score >=60)
    {
        printf("점수: %d --- 합격\n", score);
    }
    else
    {
      printf("점수: %d --- 불합격\n", score);
    }
    if(score2 >=60)
    {
        printf("점수: %d --- 합격\n", score2);
    }
    else
    {
        printf("점수: %d --- 불합격\n", score2);
    }
    return 0;

}