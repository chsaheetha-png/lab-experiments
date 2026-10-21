#include<stdio.h>
int main()
{
	float speed,time,distance;
	printf("Enter the speed of object:\n");
	scanf("%f",&speed);
	printf("enter the time travelled by an object:\n");
	scanf("%f",&time);
	if (time >= 0) 
	 	{
        distance = speed * time;
        printf("The distance travelled is: %.2f meters\n", distance);
    	} 
	else 
		{
        printf("Error: Time cannot be negative.\n");
    	}
	
}
