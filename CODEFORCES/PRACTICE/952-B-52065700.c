/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:31/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        char str[100];
        int f=0;
       for(int i=0;i<=9;i++)
       {
           printf("%d\n",i);
           fflush(stdout);
           memset(str,'\0',100);
           scanf("%[^\n]s",str);
           scanf("%*c");
           if(strcmp(str,"great")==0)
                f=1;
            else if(strcmp(str,"not bad")==0)
                f=1;
            else if(strcmp(str,"don't touch me")==0)
                f=1;
            else if(strcmp(str,"cool")==0)
                f=1;
                
            else if(strcmp(str,"don't even")==0)
                f=2;
            else if(strcmp(str,"worse")==0)
                f=2;
            else if(strcmp(str,"go die in a hole")==0)
                f=2;
            else if(strcmp(str,"terrible")==0)
                f=2;
            if(f==1 || f==2)
                break;
       }
       if(f==1)
            printf("normal\n");
        else
            printf("grumpy\n");
    }
    
    return 0;
}