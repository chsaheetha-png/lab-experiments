#include<stdio.h>
int main()
{
	int a,b,c,d,max,min,max1,min1;
	printf("Enter 4 number:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b){
		max=a;
		min=b;
	}
	else{
		max=b;
		min=a;
	}
	if(c>d){
		max1=c;
		min1=d;
	}
	else{
		max1=d;
		min1=c;
	}
	if(max>max1)
		printf("%d is big\n",max);
	else
		printf("%d is big\n",max1);
	if(min>min1)
		printf("%d is small\n",min);
	else
		printf("%d is small\n",min1);			
}
