#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total;
	float avg;
	printf("Enter the 5-subject marks:\n");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	printf("The sum of 5-subject marks is %d",total);
	avg=total/5.0;
	printf("The avg of 5-subjects marks is %f",avg);
}
