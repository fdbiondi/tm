#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_SZ 9999
int main() {
	char *str = malloc (MAX_NAME_SZ);
	char *token;
	int candidatos,votos[9999],i,j,k,total,bandera,a;
	float porcentaje;
	scanf("%d\n",&candidatos);
	fflush(stdin);
	fgets (str, MAX_NAME_SZ, stdin); 
	char *rest = str;

	i = 0;
	total = 0;
	bandera = 2;

	while((token = strtok_r(rest, " ", &rest)))
	{
	    votos[i] = atoi(token);
	    total = total + votos[i];
		i++;
	}
	i = candidatos;
	for(k=0;k<i;k++){
		float porcentaje = (((float)votos[k]/total)*100);
		if(porcentaje >= 45.0)
			bandera = 1;
	}
	if(bandera != 1){
		for (k = 0; k < i; ++k)
    	{
	        for (j = k + 1; j < i; ++j)
        	{
	            if (votos[k] < votos[j])
            	{
	                a =  votos[k];
                	votos[k] = votos[j];
                	votos[j] = a;
	            }
        	}
    	}
	}
	if((((float)votos[0]/total)*100 >= 40.0)){
		if (((((float)votos[0]/total)*100)-(((float)votos[1]/total)*100) >= 10.0))
			bandera = 1;
	} 
		
	printf("%d\n",bandera);
	return 0;
}