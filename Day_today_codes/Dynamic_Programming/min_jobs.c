
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

int count_set_bits(int n)
{
	
	 int c,count=0;
	 while(n)
	 {
	 	c=n & 1;
	 	if(c)
	 		count++;
	 	n=n >> 1;
	 }

	 return count;
	
}
int min(int a,int b)
{
	if(a>b)
		return b;
	else
		return b;
}

int min_job_assign(int c[3][3],int N)
{
	int set_size=pow(2,N);
	int dp[set_size],mask,j,i,x;
	dp[0]=0;
	for(i=1;i<set_size;i++)
	{
		dp[i]=INT_MAX;


	}

	for(mask=0;mask<set_size;mask++)
	{
		x=count_set_bits(mask);
		for(j=0;j<N;j++)
		{
			if((mask & (1<<j))==0)
			{
				dp[mask|(1<<j)]=min(dp[mask|(1<<j)],dp[mask]+c[x][j]);
			}
		}
	}

	return dp[set_size-1];
}

int main()
{
	int c[3][3]={{8,2,5},{3,2,7},{4,1,7}};
	
	printf("%d",min_job_assign(c,3));
	return 0;
}
