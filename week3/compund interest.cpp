#include<stdio.h>
#include<math.h>
int main()
{
	float p,n,r,ci;
	printf("Enter principal amount:\n");
	scanf("%f",&p);
	printf("Enter time in months:\n");
	scanf("%f",&n);
	printf("Enter rate of interest:\n");
	scanf("%f",&r);
	ci=(p*(pow(1+r/100,n)))-p;
	printf("Compound interest = %.2f",ci);
}
