#include<stdio.h>
#include<conio.h>
int main()
{
     int h,e,c,m,so,sc,total;    
     float per;
     system("cls");
     hindi:printf("\nEnter marks of hindi(between 0 to 100)");
     scanf("%d",&h);
     if(h<0 || h>100)
    { 
      printf("Invalid marks please enter again");
      goto hindi;
    } 
    eng:printf("\nEnter marks of English(between 0 to 100)");
     scanf("%d",&e);
     if(e<0 || e>100)
    { 
      printf("Invalid marks please enter again");
      goto eng;
    }  
    math:printf("\nEnter marks of Maths(between 0 to 100)");
     scanf("%d",&m);
     if(m<0 || m>100)
    { 
      printf("Invalid marks please enter again");
      goto math;
    }  
     comp:printf("\nEnter marks of Computer(between 0 to 100)");
     scanf("%d",&c);
     if(c<0 || c>100)
    { 
      printf("Invalid marks please enter again");
      goto comp;
    }  
    science:printf("\nEnter marks of Science(between 0 to 100)");
     scanf("%d",&sc);
     if(sc<0 || sc>100)
    { 
      printf("Invalid marks please enter again");
      goto science;
    }  
   soscience:printf("\nEnter marks of Social Science(between 0 to 100)");
     scanf("%d",&sc);
     if(sc<0 || sc>100)
    { 
      printf("Invalid marks please enter again");
      goto soscience;
    }
    total=h+e+m+c+sc+sc;
    per=total/6.0;
    printf("\n Total Marks is %d ",total);
    printf("\n Percentage is %.2f",per);
    if(per<35)
      printf("\nYou are Fail");
    else
    if(per>=35 && per<45) 
       printf("\n III Division");
    else
    if(per>=45 && per<60) 
       printf("\n II Division");
    else
       printf("\n I Division");   
    
  return 0;
}