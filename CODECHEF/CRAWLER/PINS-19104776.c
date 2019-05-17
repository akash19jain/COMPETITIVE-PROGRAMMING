#include<stdio.h>
#include<math.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        
        int b[100000];
        long int pal=1;
        /*long int b=pow(10,n);
        long int pal=0;
        //pal=(b/100)-1;
        int x=n;*/
        /*if(n%2==0)
        b=pow(10,(n/2));
        else
        b=pow(10,(n-1)/2);*/
        int i;
        b[0]=1;
        for(i=1;i<=(n/2);i++)
        b[i]=0;
        
        b[i]='\0';
        
        /*if(n%2==0)
        pal=9*pow(10,((n-2)/2));
        else
        pal=9*pow(10,(n-1)/2);
       
        n=n-2;
        while(n>0)
        {
            
            if(n%2==0 )
            pal+=9*pow(10,((n-2)/2));
            else
            pal+=9*pow(10,(n-1)/2);
            
            
            n=n-2;
        }
        pal++;
        for(long int i=pal;i>=2;i--)
        {
            if(b%i==0 && pal%i==0)
            {
                pal/=i;
                b/=i;
                break;
            }
        }*/
       
      
        printf("%ld ",pal);
        for(i=0;i<=(n/2);i++)
        printf("%d",b[i]);
        
        printf("\n");
    }
    return 0;
}