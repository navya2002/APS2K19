#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void  powerset(char a[],int set_size)
{

	int size=pow(2,set_size);
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<set_size;j++)
		{
			if(i  & (1 << j))
			{
				printf("%c ",a[j]);
			}
		}
		printf("\n");
	}
}

int main()
{
	char a[3]={'a','b','c'};
	powerset(a,3);
	return 0;
}
