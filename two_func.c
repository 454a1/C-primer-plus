//一个文件中包含两个函数
#include<stdio.h>
void butter(void);
int main(void)      //ANSI/ISO C函数原型
{
    printf("I will summon the butter function.\n");
    butter();
    printf("Yes,Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butter(void)       //函数定义开始
{
    printf("You rang,sir?\n");
}