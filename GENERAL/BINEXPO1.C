//Variation of binary exponentiation: multiplying two numbers modulo m
ll binmul(ll a,ll b,ll m)
{
    ll res=0;
    a=a%m;
    while(b>0)
    {
        if(b&1)
            res=(res+a)%m;
        a=(2*a)%m;
        b>>=1;
    }
    return res;
}
