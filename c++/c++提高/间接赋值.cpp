#include <cstdio>

void getMem(char **p2)
{
    *p2 = (char *)400;
}

void func(int*a)
{
    *a=100;
}

int main()
{
    // char *p1 = NULL;
    // char **p2 = NULL;
    // p1 = (char *)0x11;
    // //直接修改
    // p1 = (char *)0x111;
    // getMem(&p1);
    // printf("%d\n", p1);

    int a=5;
    func(&a);
    printf("%d\n",a);

}