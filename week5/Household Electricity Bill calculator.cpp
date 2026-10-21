#include<stdio.h>
int main()
{
	int n;
	float total;
	printf("Enter no of units:");
	scanf("%d",&n);
	if(n<=100)
		total = n*1.50;
	else if(n<=200)
		total = n*2.50;
	else if(n<=500)
	 	total = n*4.00;
	else 
		total = n*6.00;
	printf("The total amount is %.2f",total);
	
			 		
}
