#include <stdio.h>
#include <stdlib.h>

double expected_number(double sides, int total);

int main() {
	int a,i,b;
	int numb[1000000];
	scanf("%d",&a);

	for (i = 0; i < a; i++){
		scanf("%d",&numb[i]);
	}

	for (i = 0; i < a; i++)
	{		
		printf("%g\n",(expected_number(numb[i],numb[i])));
	}
	return 0;
}

double expected_number(double sides, int total){
	if(sides != 1)
		return (((1/sides)*total)+expected_number(sides-1,total));
	return (1.0)*total;
}