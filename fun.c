#include<stdio.h>
void sum(int s1,int s2)
{

    int c;
    c=s1+s2;
    printf("the total is %d\n",c);
}
void main()
{

    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    sub(a,b);
    mul(a,b);
}
void sub(int s1,int s2)
{

    int c;
    c=s1-s2;
    printf("the total is %d\n",c);
}
void mul(int s1,int s2)
{

    int c;
    c=s1*s2;
    printf("the total is %d\n",c);
}


