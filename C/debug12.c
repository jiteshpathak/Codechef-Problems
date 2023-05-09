#include<stdio.h>
#include<ctype.h>
void main()
{
	int testc;
	scanf("%d", &testc);
	while(testc--)
	{
	char id;
	scanf("%c", &id);
	id = toupper(id);
	switch(id){
		case 'B':
		printf("Battleship \n");
		break;
		case 'C':
		printf("Cruiser \n");
		break;
		case 'D':
		printf("Destroyer \n");
		break;
		case 'F':
		printf("Frigate \n");
		break;
}
}
}
