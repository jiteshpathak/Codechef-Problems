#include<stdio.h>
int main()
{
	int testc;
	int i;
	scanf("%d", &testc);
	{
		for(i=0 ; i<testc ; i++)
		{
	        int num;
	        int sum = 0;
	        int digit;
			for(scanf("%d",&num); num!=0 ; num/=10)
			{
			digit = num%10;
			sum+= digit;
			}
		printf("%d \n", sum);
	}
}
return 0;
}
