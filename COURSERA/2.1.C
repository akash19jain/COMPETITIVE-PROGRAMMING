/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:21/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MOD 1000000007

int arr5[10][10];
int min=1000007,cur=0;
int ans[10];

void printArr(int a[],int n) 
{ 
        cur=0; 
        for (int j=0; j<n-1; j++) 
        {
            cur+=arr5[a[j]][a[j+1]];
            
        }
        //printf("%d\n",cur);
        if(cur<min) 
        {
            min=cur;
            for(int j=0;j<n;j++)
            {
                ans[j]=a[j];
            }
        } 
} 
void heapPermutation(int a[], int size, int n) 
{ 
    // if size becomes 1 then prints the obtained 
    // permutation 
    if (size == 1) 
    { 
        printArr(a, n); 
        return; 
    } 
  
    for (int i=0; i<size; i++) 
    { 
        heapPermutation(a,size-1,n); 
  
        // if size is odd, swap first and last 
        // element 
        if (size%2==1) 
        {
            int t=a[0];
            a[0]=a[size-1];
            a[size-1]=t;
        }
  
        // If size is even, swap ith and last 
        // element 
        else
        {
            int t=a[i];
            a[i]=a[size-1];
            a[size-1]=t;
        }
    } 
} 

int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&arr5[i][j]);
            }
        }
        for(int i=0;i<n;i++)
            arr[i]=i;
        heapPermutation(arr, n, n); 
        for(int i=0;i<n;i++)
            printf("%d ",ans[i]+1);
        
    }
    return 0;
}
