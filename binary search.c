#include<stdio.h>
int main()
{
    int n,i,j,search;
    printf("enter the array size:\n")
    scanf(" %d",&n);
    int arr[n];
    for(i=0;i<=n;i++)
    {
        printf("enter the element:\n")
        scanf("%d", &arr[i]);
        printf("enter the earch elemnt:\n")
        scanf("%d", &search);
    }
    return 0;
}
