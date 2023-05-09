#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
		int mon, bill;
		scanf("%d %d", &mon ,&bill);
		if(mon>=bill) printf("YES \n");
		else printf("NO \n");
	}
	return 0;
}
