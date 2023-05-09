#include<stdio.h>
int main()
{
	int with; 
	float bal;
	scanf("%d", &with);
	scanf("%f", &bal);
	if(with % 5 == 0)
	{
		float bal2 = 0.0;
		bal2= (bal - (float) with )- 0.5;
		if(bal2<0) printf("%.2f", bal);
		else printf("%.2f", bal2);
	}
	else
	printf("%.2f", bal);
return 0;
}
