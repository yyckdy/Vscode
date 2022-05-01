#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getMem(char **p2)
{
    *p2 = 400;
}

int main11()
{
    char *p1 = NULL;
    char **p2 = NULL;
    p1 = 0x11;
    p2 = 0x22;
    //直接修改
    p1 = 0x111;
    getMem(&p1);
    printf("%d\n", p1);

    // char**p1=NULL;
    // char***p2=NULL;
    // p1=0x11;
    // p2=&p1;
    // *p2=1000;
    // printf("%d\n",p1);
}

void getMem2(char **myp1, char **myp2, char *mylen1, char *mylen2)
{
    char *tmp1 = (char *)malloc(100);
    strcpy(tmp1, "1132233");
    *mylen1 = strlen(tmp1);
    *myp1 = tmp1;
    //间接赋值
    char *tmp2 = (char *)malloc(100);
    strcpy(tmp2, "aabbdhdh");
    *mylen2 = strlen(tmp2);
    *myp2 = tmp2;
}

int main()
{
    char *p1 = NULL;
    char *p2 = NULL;
    int len1 = 0;
    int len2 = 0;
    getMem2(&p1, &p2, &len1, &len2);

    if (p1 != NULL)
    {
        free(p1);
        p1 = NULL;
    }

    if (p2 != NULL)
    {
        free(p2);
        p2 = NULL;
    }
}
