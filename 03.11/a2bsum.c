//scanf로 입력받은 변수 a부터 b까지의 합을 출력 for문 사용
#include<stdio.h>

int main (void)
{
    int a, b, sum = 0;
    printf("a와 b를 입력하세용");
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; ++i)
    {
        sum = sum + i;
    }
    printf("%d부터 %d까지의 합은: %d\n", a, b, sum);
    return 0;
}