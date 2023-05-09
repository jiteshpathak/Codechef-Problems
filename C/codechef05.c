#include<stdio.h>
int main()
{
	int testc;
	int i;
	printf("Enter number of tescases \n");
	scanf("%d", &testc);
	{
		for(i=0 ; i<testc ; i++)
		{
	        int num;
	        printf("Enter number to reverse \n");
	        scanf("%d",&num);
	        int temp;
			int rev = 0;
	        int digit;
			for(temp = num; temp!=0 ; temp/=10)
			{
			digit = temp%10;
			rev = rev * 10 + digit;
			}
		printf("Reverse of %d = %d \n", num , rev);
	}
}
return 0;
}
