#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100];
  	int i,j,n,m;

  	printf("\n Enter any String :  ");
  	gets(str);

  	int len=strlen(str);
  	m=len-1;

  	for(i=len-1;i>=0;i--)
	{
		if(str[i]==' ' || i==0)
		{
			if(i==0)
			{
				n=0;
			}
			else
			{
				n=i+1;
			}
			for(j=n;j<=m;j++)
			{
				printf("%c", str[j]);
			}
			m=i-1;
			printf(" ");
		}
	}

  	return 0;
}
