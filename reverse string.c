#include<stdio.h>
#include<string.h>
int main()
{
char s[100],ch;
int itr,l=0,i;
scanf("%[^\n]s",s);
l=strlen(s);
for(itr=0;itr<l/2;itr++)
  if(!((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<= 122) || (s[i]>=48 && s[i]<=57)))

{
ch=s[itr];
s[itr]=s[l-itr-1];
s[l-itr-1]=ch;

}
printf("%s",s);
}
