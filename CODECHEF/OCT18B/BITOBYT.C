https://www.codechef.com/OCT18B/problems/BITOBYT/

#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        
        long long bit=1,nib=0,byte=0;
        int cu=0;
        while(n>2)
        {
            if(n>2)
            {
                nib=bit;
                bit=0;
                n=n-2; 
            }
            else
            break;
            if(n>8)
            {
                byte=nib;
                nib=0;
                n=n-8;
            }
            else
            break;
            if(n>16)
            {
                bit=byte*2;
                byte=0;
                n=n-16;
            }
            else
            break;
            
        }
        printf("%lld %lld %lld\n",bit,nib,byte);
        
    }
    return 0;
}
