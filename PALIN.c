#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void find_next_palindrome(char* numb);



int main(){
	int a,i;
	long int b;
	char** numb = malloc(1000000);
	scanf("%d",&a);

	for (i = 0; i < a; i++){
		scanf("%s",numb);
		numb++;
	}

	for (i = 0; i < a; i++)
	{	
		printf("%s \n",numb[i]);	
		/*find_next_palindrome(numb[i]);*/
	}
	return 0;
}

void find_next_palindrome(char* numb){
	char* m1 = malloc(1000000);
	char* m2 = malloc(1000000);
	long int i,lenght,max;

	lenght = strlen(numb);

/*
	if(lenght % 2 == 0){
		// par
		max = lenght/2;
		for(i=0;i<max;i++){
			m1[i] = p[i];
			m2[i] = p[lenght-max+i];
		}
		if(atol(m1) <= atol(m2)){
			sprintf(m1, "%li", atol(m1)+1);
		}			
		for(i=0;i<max;i++){
			p[i] = m1[i];
			p[max+i] = m1[max-i-1];
		}
	} else {
		// impar
		max = (lenght-1)/2;
		for(i=0;i<max;i++){
			m1[i] = p[i];
			m2[i] = p[max+i+1];
		}
		if(atol(m1) <= atol(m2)){
			m1[max] = p[max];
			sprintf(m1,"%li",atol(m1)+1);
			p[max] = m1[max];
		}			
		for(i=0;i<max;i++){
			p[i] = m1[i];
			p[max+i+1] = m1[max-1-i];
		}
	}
	printf("%s\n", p);*/
}