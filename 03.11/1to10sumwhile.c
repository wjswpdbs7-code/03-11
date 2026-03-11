#include<stdio.h>

int main(void)
{
  int i = 1;
  int sum = 0;
  while(i <= 10){
    sum += i;
    ++i;
  }
  printf("1부터 10까지의 합: %d\n", sum);
  return 0;
}