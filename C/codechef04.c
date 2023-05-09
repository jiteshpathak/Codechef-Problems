#include<stdio.h>
void main()
{
	int testc;
	int i;
	printf("Enter number of tescases \n");
	scanf("%d", &testc);
	{
		for(i=0 ; i<testc ; i++)
		{
	        int num;
	        printf("Enter number \n");
	        int sum = 0;
	        int digit;
			for(scanf("%d",&num); num!=0 ; num/=10)
			{
			digit = num%10;
			sum+= digit;
			}
		printf("Sum of digits = %d \n", sum);
	}
}
}
