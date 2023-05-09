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
	        scanf("%d",&num);
	        int temp;
			int rev = 0;
	        int digit;
			for(temp = num; temp!=0 ; temp/=10)
			{
			digit = temp%10;
			rev = rev * 10 + digit;
			}
		printf("%d \n", rev);
	}
}
return 0;
}
