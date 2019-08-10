long long gcd(long long u,long long v)
{
    if (v == 0) return u; 
       return gcd(v, u%v);
}

int main()
{
    CASES
    {
        ll a,b;
        SC2(a,b);
        ll g=gcd(a,b);
        ll lcm=a*b/g;
        PF2(g,lcm);
    }
}
