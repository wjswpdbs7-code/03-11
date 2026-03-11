//*   *
// * *
//  *
// * *
//*   *
//위 값이 for중첩문을 사용하여 출력되도록

#include <stdio.h>

int main(void)
/*{
    int i, j;
    for (i = 1; i <= 5; ++i) {
        for (j = 1; j <= 5; ++j) {
            if ((i == 1 || i == 5) && (j == 1 || j == 5)) {
                printf("*");
            } else if ((i == 2 || i == 4) && (j == 2 || j == 4)) {
                printf("*");
            } else if (i == 3 && j == 3) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/
//산술연산자를 활용해 더 간단하게 코드를 요약하면
{
    int i, j;
    for (i = 1; i <= 5; ++i) {
        for (j = 1; j <= 5; ++j) {
            if ((i + j == 6) || (i == j)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
