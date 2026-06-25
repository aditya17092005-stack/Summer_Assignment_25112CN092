#include<stdio.h>
#include <stdlib.h>

int main()
{
char s1[99],s2[99];
scanf("%s\n%s",s1,s2);
int count=0,i,j;
for(i=1;s1[i]!='\0';i++)
{
    for(j=1;s2[j]!='\0';j++)
    {
        if(s1[i]==s2[j])
        {
            count++;
            s1[i]='*';
            s2[j]='*';
            break;
        }
    }
}
printf("%d",count);
}