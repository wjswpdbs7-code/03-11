#include<stdio.h>

int main(void)
{
    int num;
    printf("숫자를 넣으세요");
    scanf("%d", &num);

    if(num > 0)
    printf("%d는 양수입니다.\n", num);

    else if(num == 0) //여기서 else if를 사용한 이유는 
    //num이 0인 경우를 따로 처리하기 위해서입니다. 만약 else if 대신 else를 사용한다면,
    //num이 0인 경우도 음수로 처리되어 잘못된 결과가 나올 수 있습니다. 따라서 num이 0인 경우를 명확하게 구분하기 위해 else if를 사용한 것입니다.
    //
    {
        printf("%d는 0입니다.\n", num);
      }
      else
      {
       printf("%d는 음수입니다.\n", num);
      }

    printf("절대값은 : %d\n", num<0 ? -num : num );
    return 0;
}