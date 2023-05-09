#include <stdio.h>

int main()
{
    int last,num,testcase,first, i;
    scanf("%d",&testcase);
    for (i=0; i<testcase ; i++)
        {
		scanf("%d",&num);
        last = num%10;
        while(num>0) 
		{
			first=num%10; 
			num/=10;
		}
        printf("%d\n",first+last);
    }
    return 0;
}
