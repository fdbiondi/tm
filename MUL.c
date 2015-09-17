#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void multiply_numbers(long int numba, long int numb);

int main(){
	int a,i,b;
	long int numa[10000],numb[10000];
	scanf("%d",&a);

	for (i = 0; i < a; i++){
		scanf("%li %li",&numa[i],&numb[i]);
	}

	for (i = 0; i < a; i++)
	{		
		multiply_numbers(numa[i],numb[i]);
	}
	return 0;
}

void multiply_numbers(long int numba, long int numb){
	char p[1000000];
	long int lenght,i,buffer,a;
	int b;
	sprintf(p, "%li", numb);
	lenght = strlen(p)-1;
	buffer = 0;

	
	for(i=0;i<=lenght;i++){
		b = (int)(p[lenght-i])-48;
		a = (p[lenght-i]*numba*pow(10,i));
		buffer = buffer+(b*numba*pow(10,i));
	}
	printf("%ld \n",buffer);
}