#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * entrada();

int main(){
	long long int soldados_q[100000],soldados_n[100000];
	int i,batallas,k;
    char q[9999],n[9999];
    char *p1,*p2;
    
    
  	scanf ("%[^\n]%*c", q);
    fflush(stdin);
    scanf ("%[^\n]%*c", n);
    fflush(stdin);

    printf("n-> %s \n q-> %s",q,n);
    p1 = strtok(q," ");
    p2 = strtok(n," ");
 
 	i=0;
    while (p1 != NULL) {
    	printf("%lli | i: %d\n\n",atoll(p1),i);
        soldados_q[i] = atoll(p1);
        p1 = strtok(NULL," ");
        i++;
    }
batallas = i;
   i=0;
    while (p2 != NULL) {
        soldados_n[i] = atoll(p2);
        p2 = strtok(NULL," ");
        i++;
    }

    for(k=0;k<batallas;k++){
    	printf("%lli\n",soldados_q[k]);
    }
    return 0;
}

char * entrada(){
	char *rawString = (char *)malloc(200*sizeof(char));
	char *rawStringInitial = rawString;
	char c;
	c=getchar();
	while(c!='\n')
	{
	  *rawString=c;
	  rawString++;
	  c=getchar();
	}
	*rawString='\0';
	return rawStringInitial;
}
