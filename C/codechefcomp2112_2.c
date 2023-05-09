#include<stdio.h>
main()
{
	int testc;
	int i;
	scanf("%d", &testc);
	{
		for(i=0 ; i<testc ; i++)
		{
	        int spice;
	        scanf("%d",&spice);
	        if(spice < 4)
	        	printf("MILD\n ");
			else if( spice >= 4 && spice < 7)
				printf("MEDIUM\n");
			else if (spice>=7) 
				printf("HOT\n");
	else	
	{
	printf("error \n");
	}
}
}
}
