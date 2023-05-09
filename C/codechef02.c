#include<stdio.h>
int main()
{
	int num,div,flag=0,i;
	scanf("%d %d",&num,&div);
	for(i=0;i<num;i++)
	{
		int t;
		scanf("%d",&t);
		if(t%div==0)
		{
			flag++;
		}
	}
	printf("%d",flag);
	return 0;
}
