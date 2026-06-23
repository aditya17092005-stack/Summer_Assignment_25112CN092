#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;
char str[1000];

scanf("%s",str);
for( i=0;i<strlen(str);i++)
{
    for(j=i+1;j<strlen(str);j++)
    {
        if(str[i]==str[j])
        {
            printf("%c",str[i]);
        }
    }
}
}