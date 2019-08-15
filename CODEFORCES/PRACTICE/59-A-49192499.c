/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:30/01/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    char arr[105];
    scanf("%s", arr);
    int l=strlen(arr),u=0,lo=0;
    for(int i=0;i<l;i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
        lo++;
        else
        u++;
    }
    if(lo>=u)
    {
        for(int i=0;i<l;i++)
        {
            if(arr[i]>='a' && arr[i]<='z')
            continue;
            else
            arr[i]=arr[i]+32;
        }
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            if(arr[i]>='a' && arr[i]<='z')
            arr[i]=arr[i]-32;
            
        }
    }
    printf("%s",arr);
    return 0;
}