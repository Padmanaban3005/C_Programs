#include<stdio.h>
int main()
{
int n,flag=0,itr,key;
scanf("%d", &n);
int arr[n];
for(itr=0;itr<n;itr++)
{
scanf("%d", &arr[itr]);
}
scanf("%d", &key);
for(itr=0;itr<n;itr++)
{
    if(key==arr[itr])
    {
        flag=1;
        break;
    }
}
if(flag==0)
{
    printf("not found");
}
else
    printf("found");
}

