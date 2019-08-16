#   SOLVED PARTIALLY FOR 10 POINTS
#    AUTHOR:AKASH JAIN
#*   USERNAME:akash19jain    
#*   DATE:13/07/2019 
#*/

t=int(input())
for a in range(t):
    ans=0
    n=int(input())
    arr=(map(int,input().split()))
    arr=list(arr)
    le=len(arr)
    l=len(arr)
    k=0
    
    while l!=1:
        k+=1
        sum=10000000007
        for i in range (l):
            c=arr[(i+1)%l]+arr[i]
            if sum>c:
                
                index=i
                sum=c
                
            if k>le:
                sum=-1
                
        ans+=sum
        arr.insert(index,sum)
        arr.remove(arr[index+1])
        arr.remove(arr[(index+1)%l])
        l-=1
        
        if k>le:
                ans=-1
    
    print(ans)