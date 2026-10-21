#include<stdio.h>
int main()
{
	float p,n,r,si;
	printf("enter principal amount in rupees:\n");
	scanf("%f",&p);
	printf("Enter the amount of time in months:\n");
	scanf("%f",&n);
	printf("Enter the rate of interest:\n");
	scanf("%f",&r);
	si=(p*n*r)/100;
	printf("The simple interest is %.2f",si);
}
