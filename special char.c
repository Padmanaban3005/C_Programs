#include<stdio.h>
 #include<string.h>

 int main(){
   char str[100];
   gets(str);

   int l = strlen(str);
   char nstr[100];
   int j =0;

   for(int i=0;i<l;i++){
     if(str[i]!='a' && str[i]!='e' &&  str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' ){
        nstr[i]=str[i];
       // j++;
     }
     else{
       nstr[i]=' ';
     }

   }

   for(int i =0 ; i<l;i++){
     printf("%c",nstr[i]);
   }
   /*
  nstr[j] = '\0';
   printf("%s",nstr[j]);
   return 0;
   */
 }
