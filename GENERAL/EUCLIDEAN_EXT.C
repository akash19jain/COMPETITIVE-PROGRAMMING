/*From Euclid it is known that for any positive integers A and B there exist such integers X and Y that
AX + BY = D, where D is the greatest common divisor of A and B. The problem is to find for given
A and B corresponding X, Y and D.*/
//. If there are several X and Y satisfying the minimal criteria, output the pair for which X ≤ Y .


ll euclid(ll a,ll b,ll &x,ll &y)
{
    if(a==0)
    {
        x=0;
        y=1;
        return b;
    }
    ll x1,y1;
    ll d=euclid(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return d;
}

int main()
{
    ll a,b;
    while(SC2(a,b)!=EOF)
    {
        ll x,y;
        ll ans=euclid(a,b,x,y);
        if(a==b && x>y)         //extra for condition 2 above
        {
            ll t=x;
            x=y;
            y=t;
        }
        if(ans==0)          //special case for condition 2 above
        {
            x=1;
            y=0;
        }
        PF3(x,y,ans);
    }
}

