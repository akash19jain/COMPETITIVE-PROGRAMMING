https://www.codechef.com/APRIL18B/problems/CHEFWORK/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int arr1[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr1[i]);
	int s1=5000,k1=-1,k2=-1,s2=5000,s3=5000,k3=-1;
	for(int i=0;i<n;i++)
	{
		if(arr1[i]==1 && k1==-1)
		{
			s1=arr[i];
			k1=i;
			
		}
		if(arr1[i]==2 && k2==-1)
		{
			s2=arr[i];
			k2=i;
			
		}
		if(arr1[i]==3 && k3==-1)
		{
			s3=arr[i];
			k3=i;
			
		}
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]<s1 && arr1[i]==1)
		s1=arr[i];
		if(arr[i]<s2 && arr1[i]==2)
		s2=arr[i];
		if(arr[i]<s3 && arr1[i]==3)
		s3=arr[i];
	}
	
	int sum=s1+s2;
	if(sum<s3)
	printf("%d",sum);
	else
	printf("%d",s3);

    return 0;
}
