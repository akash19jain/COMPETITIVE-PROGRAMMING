/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:31/03/2019 
*/
//https://www.geeksforgeeks.org/emirp-numbers/

// Program to print Emirp numbers less than n 
#include <bits/stdc++.h> 
using namespace std; 
#include <iostream> 
#include <algorithm> 
int arr[200000];
int a=0;
// Function to find reverse of any number 
int reverse(int x) 
{ 
	int rev = 0; 
	while (x > 0) 
	{ 
		rev = (rev*10) + x%10; 
		x = x/10; 
	} 
	return rev; 
} 

// Sieve method used for generating emirp number 
// (use of sieve of Eratosthenes) 
void printEmirp(int n) 
{ 
	// Create a boolean array "prime[0..n]" and initialize 
	// all entries it as true. A value in prime[i] will 
	// finally be false if i is Not a prime, else true. 
	bool prime[n+1]; 
	memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=n; p++) 
	{ 
		// If prime[p] is not changed, then it is a prime 
		if (prime[p] == true) 
		{ 
			// Update all multiples of p 
			for (int i=p*2; i<=n; i += p) 
				prime[i] = false; 
		} 
	} 
	
	// Traverse all prime numbers 
	for (int p=2; p<=n; p++) 
	{ 
		if (prime[p]) 
		{ 
			// Find reverse a number 
			int rev = reverse(p); 

			// A number is emrip if it is not a palindrome 
			// number and its reverse is also prime. 
			if (p != rev && rev <= n && prime[rev]) 
			{ 
			 arr[a++]=p;
              arr[a++]=rev;
				
			// Mark reverse prime as false so that it's 
			// not printed again 
			prime[rev] = false; 
			} 
		} 
	} 
} 

// Driver program 
int main() 
{ 
	int n = 1000000; 
	printEmirp(n); 
  sort(arr,arr+a);
  int z;
  scanf("%d",&z);

  cout << arr[z-1];
	return 0; 
}