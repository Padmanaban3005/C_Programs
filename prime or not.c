#include<stdio.h>
int primeno(int,int);
int main(){
int num,check;
printf("Enter a Number: ");
scanf("%d",& num);
check=primeno(num,num/2);
if (check==2)
{
    printf("%d is a prime number\n",num);
    else{
        printf("%d is a Not Prime number\n",num);
    }
    return 0;
}

int primeno

}
