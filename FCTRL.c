#include <stdio.h>
#include <math.h>

long zeta(long long n);

int main(){
	int i,t;
	long long num[100000];

	scanf("%d",&t);

	for(i = 0; i < t;i++){
		scanf("%lld",&num[i]);
	};
	printf("\n");
	for (i = 0; i < t;i++){
		printf("%ld\n",zeta(num[i]));
	};
	return 0;
}

long zeta(long long n){
	long zeros = 0;
	int i = 0, div;

	do{
		i++;
		div = n/pow(5,i);
		zeros += div;
	}while(div > 0);

	return zeros;	
}