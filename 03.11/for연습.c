
//1. 1부터 10까지의 숫자를 출력하는 프로그램

#include <stdio.h>

int main(void)
{
    int a = 0;
    int i;
      for(i = 0; i < 10; i++)
    {
      a = a + 1;
    }
    printf("%d\n", a);
    return 0;
}