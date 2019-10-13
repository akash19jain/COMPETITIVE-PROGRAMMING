/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:25/01/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
 
int main()
{
    int a,i,f;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        f=1;
        if(a%i==0)
        {
            int x=i;
            f=0;
            while(x>0)
            {
                int r=x%10;
                if(r!=4 && r!=7)
                {
                    f=1;
                    break;
                }
                x=x/10;
            }
            if(f==0)
            {
                printf("YES");
                f=2;
                break;
            }
        }
        if(f==2)
        break;
    }
    if(f==1)
    printf("NO");
    return 0;
}