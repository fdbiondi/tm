#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int compara (long int soldado_n, long int ejercito_q[],int lenght);
void ordena (long int * lista,int size);

int main() {
	
	long int q[100000],n[100000];
	int total_wins=0;
	int i,s,f;
	scanf("%d",&s);
	for(i=0;i<s;i++){
		scanf("%ld",&q[i]);
	}
	for(i=0;i<s;i++){
		scanf("%ld",&n[i]);
	}

	ordena(q,s);

	for (i = 0; i < s; ++i)
	{
		f = compara(n[i],q,s);
		if (f==1){
			total_wins++;
		}
	}

	printf("%d\n",total_wins);


	
	return 0;
}

void ordena (long int * lista,int size){
	int i,j,max,aux;
	for (j = 0; j < size-1; j++)
	{
		max = j;
		for (i = j+1; i < size; i++)
		{
			if(lista[i] > lista[max]){
				max=i;
			}
		}
		aux=lista[j];
		lista[j]=lista[max];
		lista[max]=aux;
	}
}

int compara (long int soldado_n, long int * ejercito_q,int lenght){
	int i,f=0, win;
	for(i=0;i<lenght;i++){
		if (ejercito_q[i] == 0){
			continue;
		}
		if (soldado_n > ejercito_q[i]){
			win = i;
			f=1;
			break;
		}
	}
	if(f==1){
		ejercito_q[win]=0;
	}
	return f;

}