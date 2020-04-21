class Solution {
public:
    bool isHappy(int n) 
    { 
        int count=100000;
        while(count--)
        {
            int sum=0;
            while(n)
            {
                int r=n%10;
                sum+=r*r;
                n=n/10;
            }
            n=sum;
            if(n==1)
                return true;
        }
        return false;
        
    }
};