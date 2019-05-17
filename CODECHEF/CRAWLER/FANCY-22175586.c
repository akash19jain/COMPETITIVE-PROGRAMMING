/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:04/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    scanf("\n");
    while(t--)
    {
        int flag=0;
        char str[109];
        gets(str);
        int l=strlen(str);
        //printf("%d ",l);
        if(l==3)
        {
            if(str[0]=='n' && str[1]=='o' && str[2]=='t')
            flag=1;
        }
        if(str[0]=='n' && str[1]=='o' && str[2]=='t' && str[3]==' ')
        flag=1;
        
        for(int i=1;i<l-3;i++)
        {
            if(str[i-1]==' ' && str[i]=='n' && str[i+1]=='o' && str[i+2]=='t'&& str[i+3]==' ')
            {
                flag=1;
                break;
            }
        }
        if(str[l-4]==' ' && str[l-3]=='n' && str[l-2]=='o' && str[l-1]=='t')
        flag=1;
        
        if(flag==1)
        printf("Real Fancy\n");
        else
        printf("regularly fancy\n");
    }
}