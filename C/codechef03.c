#include<stdio.h>
main()
{
	int testc;
	scanf("%d", &testc);
	while(testc>0)
	{
		int num, div, rem;
		scanf("%d", &num);
		scanf("%d", &div);
		rem = num%div;
		printf("%d", rem);
		printf("\n");
		testc--;
	}
}
