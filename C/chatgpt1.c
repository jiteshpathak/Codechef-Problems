#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    int i;
    for ( i = 0; i < t; i++) {
        int n, x;
        scanf("%d %d", &n, &x);
		int freshness[n], cost[n];
        int j;
        for (j = 0; j < n; j++) {
            scanf("%d", &freshness[j]);
        }
        for (j = 0; j < n; j++) {
            scanf("%d", &cost[j]);
        }
        int total_cost = 0;
        for (j = 0; j < n; j++) {
            if (freshness[j] >= x) {
                total_cost += cost[j];
            }
        }
        printf("%d\n", total_cost);
    }
    return 0;
}
