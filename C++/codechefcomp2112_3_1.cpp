#include<stdio.h>
int main() {
	int testc;
	scanf("%d", &testc);
	int i;
	while(testc--){
	        int item, minfreshness;
	        scanf("%d %d",&item, &minfreshness);
	        int freshness[item], cost[item];
	        int j;
	        for(j=0; j < item;j++){
          		scanf("%d", &freshness[j]);
	        }
	        for(j=0; j < item;j++) {
				scanf("%d", &cost[j]);
			}
			int total=0;
			for(j=0; j< item;j++) 			{
				if(freshness[j]>= minfreshness){
					total+=cost[j];
				}
			}
printf("%d \n", total);
}
return 0;
}
