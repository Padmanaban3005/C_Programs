#include<stdio.h>
int main()
{
    int i,x,n,sum,j;
    printf("enter X value:");
    scanf("%d",&x);
    printf("enter the arr size:");
    scanf("%d",&n);
    int a[n],flag=0;
    printf("enter array elements:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            sum=a[i]+a[j];
            if(sum==x)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}
