#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int subset_count(int set[],int set_size,int value)
{
	int count=0;
	int size=pow(2,set_size);
	int i,j,sum=0;
	for(i=0;i<size;i++)
	{
	    sum=0;
		for(j=0;j<set_size;j++)
		{
			if(i & (1<<j))
			{
				sum=sum+set[j];


			}
		}
			printf("%d\n",sum);
		if(sum >= value)
		{
			printf("sbdh");
			count++;
		}
	}
	return count;
}


int main()
{
	int set[3]={1,2,3};
	int value=3;
	int count=subset_count(set,3,value);
	//printf("%d",count);
	return 0;
}
