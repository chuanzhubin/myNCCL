#include <stdio.h>

int iGlobal1 = 0;
int iGlobal2 = 0;
int iGlobal3 = 0;

char cGlobal1 = 0x00;
char cGlobal2 = 0x00;
char cGlobal3 = 0x00;

float fGlobal1 = 0;
float fGlobal2 = 0;
float fGlobal3 = 0;

long long llGlobal1 = 0;
long long llGlobal2 = 0;
long long llGlobal3 = 0;

int main()
{
    int iLocal1 = 0;
    int iLocal2 = 0;
    int iLocal3 = 0;

    printf("length of int:[%d] char:[%d] float:[%d] long long:[%d]\n\n",
          sizeof(int), sizeof(char), sizeof(float), sizeof(long long));

    /*1, ��ӡ������3��ȫ�ֱ�����3���ֲ������ĵ�ַ*/
    printf("3 int global var [%p] [%p] [%p]\n", &iGlobal1, &iGlobal2, &iGlobal3);
    printf("3 local var [%p] [%p] [%p]\n\n", &iLocal1, &iLocal2, &iLocal3);

    /*3, �� global ����Ϊ char, short, float ����*/
    printf("3 char global var [%p] [%p] [%p]\n", &cGlobal1, &cGlobal2, &cGlobal3);
    printf("3 float global var [%p] [%p] [%p]\n", &fGlobal1, &fGlobal2, &fGlobal3);
    printf("3 long long global var [%p] [%p] [%p]\n\n", &llGlobal1, &llGlobal2, &llGlobal3);

    /*2, ͨ��ǿ������ת������ӡһ�� &global + 1 ��ֵ*/
    printf("3 local var [%p] [%p] [%p]\n\n", &iLocal1 + 1, (short *)&iLocal1 + 1, (long *)&iLocal1 + 1);

    return 0;
}