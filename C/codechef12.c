#include<stdio.h>
#include<ctype.h>
int main()
{
	int testc;
	scanf("%d", &testc);
	while(testc--)
	{
	char b;
	scanf("%c", &b);
		if(b=='b'|| b=='B')
		printf("Battleship \n");
		if(b=='c'|| b=='C')
		printf("Cruiser \n");
		if(b=='d'|| b=='D')
		printf("Destroyer \n");
		if(b=='f'|| b=='F')
		printf("Frigate \n");
}
return 0;
}
