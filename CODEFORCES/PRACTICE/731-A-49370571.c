/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:02/02/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    char str[105];
    scanf("%s",str);
    int l=strlen(str),ans=0;
    char ch='a';
    for(int i=0;i<l;i++)
    {
        int x=abs(ch-str[i]);
        int y=26-x;
        if(x<y)
        ans+=x;
        else
        ans+=y;
        
        ch=str[i];
    }
    printf("%d",ans);
    return 0;
}