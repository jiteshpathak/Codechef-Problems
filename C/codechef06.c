#include<stdio.h>
int main()
{
	int testc;
	int i;
	scanf("%d", &testc);
	{
		for(i=0 ; i<testc ; i++)
		{
	        int a, b;
	        scanf("%d %d",&a, &b);
	        int sum = a+b;
		printf("%d \n", sum);
	}
}
return 0;
}
