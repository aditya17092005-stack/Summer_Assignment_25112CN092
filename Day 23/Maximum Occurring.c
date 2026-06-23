#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char getMaxOccurringChar(char str[])
{
    
    
    int count[256] = { 0 };

    
    
    int length = strlen(str);
    for (int i = 0; i < length; i++)
        count[(int)str[i]]++;

    
    char maxChar;
    int maxCount = 0;
    for (int i = 0; i < length; i++) {
        if (count[(int)str[i]] > maxCount) {
            maxCount = count[(int)str[i]];
            maxChar = str[i];
        }
    }

    return maxChar;
}


int main()
{
    char str[] = "sample string";
    printf("Max occurring character is: %c\n",
           getMaxOccurringChar(str));
    return 0;
}