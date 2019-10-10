/*
 * @lc app=leetcode id=7 lang=c
 *
 * [7] Reverse Integer
 */

// @lc code=start


int reverse(int x){
int MAX=pow(2,31);
int ans=0;
int f=0;
if(x<0)
{
    f=1;
    x*=-1;
}
while(x>0)
{
    int r=x%10;
     if (ans > MAX/10 || (ans == MAX / 10 && r > 7)) return 0;
    ans=ans*10+r;
    x=x/10;
}
if(f)
    ans*=-1;
return ans;
}


// @lc code=end

