#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char s[100],w[50],lw[50];
    int i,p;

    printf("Enter a sentence\n");
    gets(s);

    for(i=0; i<strlen(s); i++)
    {
        if(s[i]!=' ')
        {
            
            w[p]=s[i];
            p++;
        }
        else
        {
            
            w[p]='\0';

            
            if(strlen(w)>strlen(lw))
            {
                strcpy(lw,w);
            }
            p=0;
        }
    }
    printf("Longest word = %s",lw);
    return 0;
}