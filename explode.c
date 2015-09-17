#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** explode( char *, char );
//void explode( char * , char);	


int main(){
	char  **r;
	char str[50];
	fflush(stdin);
	scanf("%[1 2 3 4 5 6 7 8 9 0 /  ]",str); // para que pueda leer los numeros con la barra y los espacios
	printf("%s\n", str );
	r = explode(str,' ');
	while(*r){
		printf("___%s\n",*r );
		r++;
	}
	return 0;

};

char ** explode( char * str, char separator){
//void explode( char * str, char separator){
	char **temp = (char **)malloc(100*sizeof(char*));
	char ** result;
	char * substr;
	int pos,i = 0, count = 0;

	for ( i = 0; i < 100; i++){
		temp[i] = (char *)malloc(100*sizeof(char));
	};

	i = 0;
	substr = strchr(str,separator);
	while(substr != NULL){
		pos = (int)(substr - str);
//		printf("%d\n", pos);
//		strncpy(result[i],str,pos);
		strncpy(temp[i],str,pos);
//		printf("%s\n", result[i]);
		i++;
		str = ++substr;
		substr = strchr(str,separator);
	};
	//strcpy(result[i],str);
	//printf("%s\n", result[i]);
	strcpy(temp[i],str);
	i++;

	result = (char **)malloc((i+1)*sizeof(char*));
	for(count = 0; count < i; count++){
		result[count] = (char *)malloc(sizeof(char)*strlen(temp[count]));
		strcpy(result[count],temp[count]);
	}
	free(temp);

	return (result);
};
