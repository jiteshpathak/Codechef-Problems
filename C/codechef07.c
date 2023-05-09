#include<stdio.h>
main()
{
	int testc;
	int i;
	scanf("%d", &testc);
	{
		for(i=0 ; i<testc ; i++)
		{
	        int a, b;
	        scanf("%d %d",&a, &b);
	        if(a > b)
	        	printf("> \n ");
			else if( a == b)
				printf("= \n");
			else if (a < b) 
				printf("< \n");
	else	
	{
	printf("error \n");
	}
}
}
}
