#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void sort(char cadena[][]);

int main() {
	// t = tests
	// c = casos
	int i,t,c,j,count = 0;
	
	char x[2],y[8],z[16],cadena[500000][30];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&c);
		count+= c;

		for(j=count;j<(c + count);j++){
			cadena[j][0] = i;
			scanf("%s %s %s",x ,y ,z);
			cadena[j][1] = strcat(x,y);
			cadena[j][1] = strcat(cadena[j],z);
		}
	}
	sort(cadena);


	return 0;
}

void sort(char cadena[500000][30]){
	int count,i ,j;
	char aux[30];

	for (i = 0; i < t; i++)
	{
		for (j = 0; j < c; j++)
		{
			if(strcmp(cadena[j],cadena[j+1])>0){
				
			}
			else if(strcmp(cadena[j],cadena[j+1])<0){

			}	
		}
	}
}
