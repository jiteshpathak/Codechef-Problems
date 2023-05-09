#include<stdio.h>
int main()
{
	int testc;
	int i;
	printf("Enter number of testcases \n");
	scanf("%d", &testc);
	while(testc--)
		{
	        int item, minfreshness;
			printf("Enter no of items and min freshness\n");
	        scanf("%d %d",&item, &minfreshness);
	        int freshness[item], cost[item];
	        int j;
	        for(j=0;j< item;j++)
	        {
	        	printf("enter freshness \n");
	        	scanf("%d", freshness[j]);
	        }
	        for(j=0; j< item;j++)
	        {
	        	printf("enter cost\n");
				scanf("%d", cost[j]);
			}
			int total=0;
			for(j=0; j< item;j++)
			{
				if(freshness[j]>= minfreshness){
					total+=cost[j];
				}
			}
printf("%d \n", total);
}
return 0;
}
