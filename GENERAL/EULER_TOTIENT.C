/*Euler's totient function, also known as phi-function ϕ(n), counts the number of integers between 1 and n inclusive, which are coprime to n.
 TIME COMPLEXITY - O(sqrt(n)) */
 

ll euler_totient(ll n)
{
    ll result=n;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
                n/=i;
            result-=result/i;
        }
    }
    if(n>1)
        result-=result/n;

    return result;
}

int main()
{
    CASES
    {
        ll n;
        SC1(n);
        ll z=euler_totient(n);
        PF1(z);
        
    }
}
