#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("Enter 2 values:");
	scanf("%d%d",&a,&b);
	printf("Choice your option form [1-5]:\n1.Addition\n2.Subtraction\n3.multiplication\n4.division\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("The addition of 2 numbers is %d\n",a+b);
			printf("%d+%d=%d",a,b,a+b);
			break;
		case 2:
			printf("The subtraction of 2 numbers is %d\n",a-b);
			printf("%d-%d=%d",a,b,a-b);
			break;
		case 3:
			printf("The multiplication of 2 numbers is %d\n",a*b);
			printf("%d*%d=%d",a,b,a*b);
			break;
		case 4:
			if(b==0||a==0)
			printf("Division by zero is not possible");
			else
			{
				printf("The division of 2 numbers is %d\n",a/b);
				printf("%d/%d=%d",a,b,a/b);
			}
			break;
		default:
			printf("invalid option");	
						
	}					
}
