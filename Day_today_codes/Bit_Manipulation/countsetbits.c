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



int main()
{
	printf("%d",count_set_bits(7));
	return 0;
}
