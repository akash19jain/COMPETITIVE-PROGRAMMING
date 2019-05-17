/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:07/02/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    char str[100];
    scanf("%s", str);
    int l=strlen(str);
    int a=0;
    for(int i=0;i<l;i++)
    {
        if(str[i]=='h' && a==0)
            a=1;
        else if(str[i]=='e' && a==1)
            a=2;
        else if(str[i]=='l' && a==2)
            a=3;
        else if(str[i]=='l' && a==3)
            a=4;
        else if(str[i]=='o' && a==4)
            a=5;
    }
    if(a==5)
    printf("YES");
    else
    printf("NO");
    return 0;
}