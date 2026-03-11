// 하나씩 늘어나는 별표 화면에 찍기
//*
//**
//***
//........

#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 5; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}