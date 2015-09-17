#include <stdio.h>
#include <stdlib.h>

void calculate_position(int a, int b);

int main(){
	int i,a[100000],b[100000],cases;
	scanf("%d",&cases);
	for (i = 0; i < cases; i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for (i = 0; i < cases; i++){
		calculate_position(a[i],b[i]);
	}
	return 0;
}

void calculate_position(int a, int b){
	if(a == b || (b+2) == a){
		if(a % 2 == 0)
			printf("%d\n",a+b);
		else
			printf("%d\n",a+b-1);
	} else {
		printf("No Number\n");
	}
}