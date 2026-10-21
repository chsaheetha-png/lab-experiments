#include<stdio.h>
int main()
{
	float speed,time,distance;
	printf("Enter the speed of object:\n");
	scanf("%f",&speed);
	printf("enter the time travelled by an object:\n");
	scanf("%f",&time);
	distance=speed*time;
	printf("The distance travelled by object is %.2f",distance);
}
