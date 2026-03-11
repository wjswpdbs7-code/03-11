#include<stdio.h>

int main(void)
{
int i = 'a';
while(i <= 'z')
  {
    printf("%c", i);
    ++i;
  }
  printf("\n");
  return 0;
}