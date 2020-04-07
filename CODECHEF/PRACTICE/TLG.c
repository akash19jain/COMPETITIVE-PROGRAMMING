/*  AUTHOR: AKASH JAIN
*   EMAIL:  akash19jain@gmail.com
*   ID:     akash19jain  
*   DATE:   06-04-2020 20:50:55
*/


 
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d",&n);
	int player_a=0,player_b=0;	//storing the cumulative score of both the players
	int max_diff=0,player=0;	//storing the maximum lead after each round and the player with the lead

	for(int i=0;i<n;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		player_a+=a;
		player_b+=b;
		if(player_a>player_b && (player_a-player_b > max_diff))
		{
			max_diff=player_a-player_b;
			player=1;
		}
		else if(player_b > player_a && (player_b-player_a > max_diff))
		{
			max_diff=player_b-player_a;
			player=2;
		}

	}
	printf("%d %d\n",player,max_diff);
}