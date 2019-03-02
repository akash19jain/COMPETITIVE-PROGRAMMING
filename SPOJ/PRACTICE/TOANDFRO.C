https://www.spoj.com/problems/TOANDFRO/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:12/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n>0)
   {
       char str[210];
       scanf("%s", str);
       int l=strlen(str);
       //printf("%d\n",l);
       int z=l/n;
       //printf("%d\n",z);
       char str1[z+1][n+1];
       int a=0;
       if(n==1 || z==1)
       {
           printf("%s\n",str);
           scanf("%d",&n); 
           continue;
       }
       for(int i=0;i<z;i++)
       {
           int f=0;
           for(int j=0;j>=0;)
           {
               str1[i][j]=str[a++];
               if(j==(n-1) && f==0)
               {
                   i++;
                   f=1;
                   j++;
               }
               if(f==1)
               j--;
               else
               j++;
           }
       }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<z;j++)
           {
               printf("%c",str1[j][i]);
           }
           //printf("\n");
       }
       printf("\n");
       scanf("%d",&n);
   }
}
