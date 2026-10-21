#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,x,y,z,i=0,j;
	printf("Enter a,b,c,d,e,f,g values");
	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
	x=a+b*c+(d*e)+f*g;
	printf("The value of x is %d\n",x);
	y=a/b*c-b+a*d/3;
	printf("The value of y is %d\n",y);
	z=a++ + b-- -a;
	printf("The value of z is %d\n",z);
	j=(i++)+(++i);
	printf("The value of j is %d\n",j);
}
