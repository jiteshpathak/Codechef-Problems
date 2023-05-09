#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
		int choc;
		scanf("%d", &choc);
		if(choc%2==0) printf("YES \n");
		else printf("No \n");
	}
	return 0;
}
