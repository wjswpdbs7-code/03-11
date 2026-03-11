#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)//void는 함수가 아무것도 반환하지 않는다는 것을 나타냅니다. VOID대신 다른
//걸 써야하는 경우를 들자면 예를들어 int main(int argc, char *argv[]) 같은 경우는 명령행 인자를 받아들이는 main 함수의 형태입니다. 
// 보통 어떤 파일을 만들때 쓰냐면
{
    int dice;
    srand(time(NULL));
    dice = rand() % 6 + 1;
    printf("주사위의 숫자는 %d 입니다.", dice);
    return 0;
}