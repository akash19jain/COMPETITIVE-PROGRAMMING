#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char string[1001];
        scanf("%s", string);
        int c=0,count[26]={0},x,max=0;;
        while (string[c] != '\0') 
        {
            if (string[c] >= 'a' && string[c] <= 'z') 
            {
                x = string[c] - 'a';
                count[x]++;
            }
            c++;
        }
        
        for (x = 0; x < 26; x++)
        {
            if(count[x]>max)
            max=count[x];
        }
        printf("%d\n",c-max);
        
    }
}