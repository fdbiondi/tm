#include <stdio.h>
#include <stdlib.h>

//int buffer[100000];

void buscar_primos(int min, int max);

int main() {
	int i,l,min[10],max[10];
	scanf("%d",&l);
	for(i=0;i<l;i++){
		scanf("%d %d",&min[i],&max[i]);
	}

	for(i=0;i<l;i++){
		buscar_primos(min[i],max[i]);
	}
	return 0;
}

void buscar_primos(int min, int max){
	int i,b,f;
	for(i=min;i<=max;i++){
		f=1;
		for(b=2;b<i;b++){
			if(i % b == 0){
				f=0;
				break;
			}
		}
		if(f == 1)
			printf("%d\n", i);		
	}
	printf("\n");
}

