#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse_number(int number);

int main(){
	int i,a[10000],b[10000],cases;
	scanf("%d",&cases);
	for (i = 0; i < cases; i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for (i = 0; i < cases; i++){
		printf("%d\n",reverse_number(reverse_number(a[i])+reverse_number(b[i])));
	}
}

int reverse_number(int number){
	char buffer[100000],snumber[100000];
	int lenght,i;
	sprintf(snumber,"%d",number);
	sprintf(buffer,"%d",number);
	lenght = strlen(snumber);
	for(i=0;i<lenght;i++){
		buffer[i] = snumber[lenght-i-1];
	}
	return atoi(buffer);
}