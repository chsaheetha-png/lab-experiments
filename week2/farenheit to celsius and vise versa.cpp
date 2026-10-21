#include<stdio.h>
int main()
{
	float c,f;
	printf("enter temperature in celsius:\n");
	scanf("%f",&c);
	f=(c*(9.0/5.0))+32;
	printf("temperature in farenheit is %f\n",f);
	c=(f-32)*(5.0/9.0);
	printf("temperature in celsius is %f\n",c);
}
