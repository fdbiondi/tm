#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TOP 1893456000

long decoder(long);



int main(){
long long r;
long date;
long top;


scanf("%lld",&r);
date = decoder(r);
printf("%ld\n", date);



return 0;
}

	long decoder(long r){
		long long q = 4000000007;
		long long x = 0;
		long div = 0;
		int i = 1;
	  
		while(div < TOP){
			printf("%ld\n", div );
			x = (i*q) + r;
			div = sqrt(x);
			i++;
		};

		return div;
	}