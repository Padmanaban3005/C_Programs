#include<stdio.h>
void sqr(int *a1,int *b1)
{

    *a1 *=2;
    *b1 *=2;
    printf("the out in func is %d %d ",*a1,*b1);
}
void main()
{

    int a,b;
    int *a1=&a;
    int *b1=&b;
    scanf("%d %d",&a,&b);
    sqr(a1,b1);
    printf("the output in main is %d %d\n",&a,&b);
}
