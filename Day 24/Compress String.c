 #include<stdio.h>
 #include<string.h>


 char* StrCompress(char myStr[])
 {
char *s = myStr;
int len = strlen(myStr);
char *in = myStr;
int count =0;
int i=0;


while(*(s) != '\0')
{
    if(*(s)==*(s+1))
    {
        count++;

        if(count == 1)
        {
            in = s;
        }
        s++;

    }
    else
    {
        
        memcpy(in+1,s+1,count);
        s=in;
        count =0;

    }
    i++;
}

return myStr;



}

int main(){

char myStr[] ="AAAABBBCCCCCEEFGIIJJJKLMNNNNOOO";

printf("Compressed String is : %s\n",StrCompress(&myStr));

return 0;

}