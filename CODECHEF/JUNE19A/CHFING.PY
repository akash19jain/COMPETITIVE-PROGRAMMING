https://www.codechef.com/JUNE19A/problems/CHFING/

#/*  AUTHOR:AKASH JAIN
#*   USERNAME:akash19jain    
#*   DATE:08/06/2019 
#*/
MOD = int(1000000007)

for _ in range(int(input())):
	n, k = map(int, input().split())
	
	ans = k -1
	
    
	if n == 2:
	    k=k-1
	    ans1=(k*(k+1))//2
	    ans1=ans1%MOD
	    print(ans1)
	else:
		k=k-n
		n-= 1
		sum=k//n
		ans+=k+(k*sum)-(n*(sum*(sum+1))//2)
		ans=ans%MOD
		print(ans)
