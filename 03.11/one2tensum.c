#include <stdio.h>
//i는 
int main(void)
{
    int sum = 0;
    for (int i = 0; i < 10; ++i) //이를 풀어쓰면 국어적으로 쓰면 i는 0부터 시작해서 10보다 작은 동안에 i를 1씩 증가시키면서 반복한다는 뜻입니다.
    {
        sum = sum + i + 1;
    }
    printf("1부터 10까지의 합은: %d\n", sum);
    return 0;
}
