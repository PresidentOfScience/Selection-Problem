#include <stdio.h>

int main(){
	long int d, s, t;
	scanf("%ld %ld %ld", &d, &s, &t);
	
	if(d > s){
		if(s > t){
			printf("Daging\n");
			printf("Sayur\n");
			printf("Telur\n");
		}
		else if(t > d){
			printf("Telur\n");
			printf("Daging\n");
			printf("Sayur\n");
		}
		else{
			printf("Daging\n");
			printf("Telur\n");
			printf("Sayur\n");
		}
	}
	else{
		if(t > s){
			printf("Telur\n");
			printf("Sayur\n");
			printf("Daging\n");
		}
		else if(t > d){
			printf("Sayur\n");
			printf("Telur\n");
			printf("Daging\n");
		}
		else{
			printf("Sayur\n");
			printf("Daging\n");
			printf("Telur\n");
		}
	}
	
	return 0;
}
