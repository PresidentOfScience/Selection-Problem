#include <stdio.h>

int main(){
	int x, y, k;
	scanf("%d %d %d", &x, &y, &k);
	if(x <= k && y >= k) printf("%d\n", y-k);
	else if((y-x) % 2 == 1) printf("-1\n");
	else printf("-1\n");
	
	return 0;
}
