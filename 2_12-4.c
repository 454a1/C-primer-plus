#include<stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    deny();
    return 0;
}

void jolly(void)        //jolly函数定义开始
{
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
}

void deny(void)     //deny函数定义开始
{
    printf("Which nobody can deny!");
}