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
	int flag=0;
	scanf("%d", &num);
	while(num)
	{
		int chk=num%10;
		if (chk == 4)
			{
				flag++;
			}
			num/=10;
		}
		printf("%d\n", flag);
}
}
return 0;
}
