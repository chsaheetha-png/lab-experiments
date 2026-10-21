#include<stdio.h>
int main()
{
	int x,y,z,sum,avg;
	printf("enter 3 numbers:\n");
	scanf("%d%d%d",&x,&y,&z);
	sum=x+y+z;
	printf("The sum is %d\n",sum);
	avg=sum/3;
	printf("The avg of x,y,z is %d",avg);
}
