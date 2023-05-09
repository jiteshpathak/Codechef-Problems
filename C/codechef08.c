#include<stdio.h>
int main()
{
	int with; float bal;
	printf("enter amount to withdraw \n");
	scanf("%d", &with);
	printf("enter total balance rn \n");
	scanf("%d", &bal);
	if(with%5==0)
	{
		float bal2;
		bal2=bal -(float) with - 0.5;
		printf("Txn success, remaining bal = %.2f", bal2);
	}
	else
	{
		printf("Amount to be withdrawn must be in multiples of 5 \n");
	}
return 0;
}
