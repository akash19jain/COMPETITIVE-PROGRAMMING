/* This is a non-standard but still positional numeral system. 
Its feature is that digits can have one of the values -1, 0 and 1. 
Nevertheless, its base is still 3 (because there are three possible values). 
Since it is not convenient to write -1 as a digit, we'll use letter Z further for this purpose. 

It is easy to represent a given number in balanced ternary via temporary representing it in normal ternary number system. 
When value is in standard ternary, its digits are either 0 or 1 or 2. 
Iterating from the lowest digit we can safely skip any 0s and 1s, 
however 2 should be turned into Z with adding 1 to the next digit. 
Digits 3 should be turned into 0 on the same terms - such digits are not 
present in the number initially but they can be encountered after increasing some 2s. */


int arr[32];    //NUMBERS ARE IN RANGE OF POW(3,32)

//CONVERTING TERNARY TO BALANCED TERNARY 
void balTer(ll ter)
{
    ll carry=0,base=10;
    int i=32;
    while(ter>0)
    {
        int r=ter%base;
        r=r+carry;
        if(r==0)
        {
            arr[i--]=0;
            carry=0;
        }
        else if(r==1)
        {
            arr[i--]=1;
            carry=0;
        }
        else if(r==2)
        {
            arr[i--]=-1;
            carry=1;
        }
        else if(r==3)
        {
            arr[i--]=0;
            carry=1;
        }
        ter=ter/base;
    }
    if(carry==1)
        arr[i]=1;
}
// CONVERTING TO BASE 3, SIMILAR TO BINARY CONVERSION
ll ternary(ll n)
{
    ll ans=0,rem=1,base=1;
    while(n>0)
    {
        rem=n%3;
        ans=ans+rem*base;
        n=n/3;
        base=base*10;
    }
    return ans;
}
int main()
{
      ll n;
      SC1(n);
      ll ter=ternary(n);
      //PF1(ter);
      balTer(ter);
      int i=0;
      while(arr[i]==0)
        i++;

    //PRINTING BY REPLACING 'Z' IN PLACE OF '-1'
    for(int j=i;j<=32;j++)
    {
        if(arr[j]==-1)
            printf("Z");
        else
        {
            printf("%d",arr[j]);
        }
        
    }
}
 
