#include<stdio.h>

struct student
{
    int regno;
    char name[10];
    int phno;
    int dob;
    float tamil;
    float english;
};
void main()
{

    struct student s[10];
   for(int i=0;i<3;i++)
   {
    scanf("%d %s %d %d %f %f %f",&s[i].regno,&s[i].name,&s[i].phno,&s[i].dob,&s[i].tamil,&s[i].english,&s[i].science);
   }
    for(int i=0;i<3;i++)
   {
    printf("%d\t %s\t %d\t %d\t %f\t %f\t %f\n",s[i].regno,s[i].name,s[i].phno,s[i].dob,s[i].tamil,s[i].english,s[i].science);
   }
}
