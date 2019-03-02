https://www.codechef.com/AUG18B/problems/SPELLBOB/

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[3];
        char b[3];
        int c[4]={0,0,0,0};
        int d[4]={0,0,0,0};
        int e[4]={0,0,0,0};
        scanf("%s",a);
        scanf("%s",b);
        
        
        for(int i=0;i<3;i++)
        {
            if((a[i]=='o' || b[i]=='o') && c[1]==0)
            c[1]++;
            
            else if(((a[i]=='b' || b[i]=='b') && c[0]==0))
            c[0]++;
            
            else if((a[i]=='b' || b[i]=='b')&&(c[0]==1) && c[2]==0)
            c[2]++;
            
            
            
            else
            c[4]++;
        }
         for(int i=0;i<3;i++)
        {
            if(((a[i]=='b' || b[i]=='b') && d[0]==0))
            d[0]++;
            
            
            else if((a[i]=='b' || b[i]=='b')&&(d[0]==1) && d[2]==0)
            d[2]++;
            
            else if((a[i]=='o' || b[i]=='o') && d[1]==0)
            d[1]++;
            
            else
            d[4]++;
        }
         for(int i=0;i<3;i++)
        {
            if(((a[i]=='b' || b[i]=='b') && e[0]==0))
            e[0]++;
            
             else if((a[i]=='o' || b[i]=='o') && e[1]==0)
            e[1]++;
            
            else if((a[i]=='b' || b[i]=='b')&&(e[0]==1) && e[2]==0)
            e[2]++;
            
           
            
            else
            e[4]++;
        }
        
       if(((c[0]>=1 && c[1]>=1 )&& c[2]>=1)||((d[0]>=1 && d[1]>=1 )&& d[2]>=1)||((e[0]>=1 && e[1]>=1 )&& e[2]>=1) )
       printf("yes\n");
       
       else
       printf("no\n");
        
    }
}
