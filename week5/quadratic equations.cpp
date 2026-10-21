#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d;
	printf("enter a,b,c values:\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0)
		printf("Roots of %.2f and %.2f",(-d+sqrt(d))/(2*a),(-d-sqrt(d))/(2*a));
	else
		printf("Imaginary roots");
	
}
