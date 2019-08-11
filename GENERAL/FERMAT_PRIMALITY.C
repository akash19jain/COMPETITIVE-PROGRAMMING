/*for a prime number p and a coprime integer a the following equation holds:
      a^(p−1) ≡ 1 mod p
      NOT ALWAYS TRUE.. GIVES WA FOR SOME NUMBERS */

ll binpow(ll a,ll b,ll m)
{
    ll res=1;
    a=a%m;
    while(b>0)
    {
        if(b&1)
            res=res*a%m;
        a=a*a%m;
        b>>=1;
    }
    return res;
}
ll primeFermat(ll n)
{
    int iter=5;
    if(n<4)
    {
        return n==2 || n==3;
    }
    for(ll i=0;i<iter;i++)
    {
        ll a=2+rand()%(n-3);
        if(binpow(a,n-1,n)!=1)
            return 0;
    }
    return 1;
}

int main()
{
    CASES
    {
        ll n;
        SC1(n);
        ll z=primeFermat(n);
        if(z==1)
            printf("YES\n");
        else
        {
            printf("NO\n");
        }
        
    }
}
