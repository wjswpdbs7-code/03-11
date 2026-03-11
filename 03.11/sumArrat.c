// random 으로 int 10개짜리 배열을 만들어서 값을 넣고, 총합을 계산하는 프로그램을 작성하시오.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int nums[10];
    int sum = 0;
    srand(time(NULL));
    for (int i = 0; i < 10; ++i) 
    {
        nums[i] = rand() % 100 + 1;
        sum += nums[i];
    }
    {
      for (int i = 0; i < 10; ++i) {
        printf("%d ", nums[i]);
      }
    }
    printf("총합: %d\n", sum);
    return 0;
}