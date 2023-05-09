#include<stdio.h>
main()
{
	int testc;
	int i;
	int num;
	scanf("%d", &testc);
	{
	for(i=0 ; i<testc ; i++)
	{
		int a1, a2, a3;
		scanf("%d %d %d", &a1 , &a2, &a3);
		int sum = (a1+a2+a3);
		if (sum == 180)
		{
			printf("YES\n");
		}
		else
		printf("NO\n");
}
return 0;
}
}

