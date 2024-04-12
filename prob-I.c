#include <stdio.h>

int main(){
	int T;
	long int A, B, C;
	scanf("%d", &T);
	
	for(int i=1; i<=T; i++){
		scanf("%ld %ld %ld", &A, &B, &C);
		if(B*A/100 < C) printf("Case #%d: %ld\n", i, B*A/100);
		else printf("Case #%d: %ld\n", i, C);
	}
	
	return 0;
}
