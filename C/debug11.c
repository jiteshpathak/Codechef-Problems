#include<stdio.h>
void main()
	{
		int a1, a2, a3;
		printf("Enter 3 triangle angles\n");
		scanf("%d %d %d", &a1 , &a2, &a3);
		int sum = (a1+a2+a3);
		if (sum == 180)
		{
			printf("YES\n");
		}
		else
		printf("NO\n");
		return 0;
	}
	
