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
	        int diff = b-a;
		printf("%d \n", diff);
	}
}
return 0;
}
