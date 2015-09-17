#include <stdio.h>
#include <stdlib.h>

long long int combinations(long long int a);
long long int factorial(long long int n);
long long int numerador(long long int n);

int main(){
	int i,cases;
	long long int a[100000],buffer;
	i=0;
	scanf("%lli",&buffer);
	while(buffer != 0){
		a[i] = buffer;
		i++;
		scanf("%lli",&buffer);
	}
	for (cases = 0; cases < i; cases++){
		printf("%lli\n",combinations(a[cases]));
	}
}

long long int combinations(long long int a){
	if(a < 9)
		return 0;
	return numerador(a)/factorial(a-9);
}

long long int numerador(long long int n){
	int i;
	long long int buffer;
	buffer=1;
	for(i=n;i>9;i--)
		buffer = buffer*i;
	return buffer;
}

long long int factorial(long long int n){
	if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}