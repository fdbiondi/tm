#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b);
int main(void) {
	int batallas,i;

	scanf("%d\n",&batallas);
	int soldados_q[batallas],soldados_n[batallas];

	for(i=0;i<batallas;i++)
		scanf("%d",&soldados_q[i]);
	for(i=0;i<batallas;i++)
		scanf("%d",&soldados_n[i]);		

	qsort (soldados_q, batallas, sizeof(int), cmpfunc);
	qsort (soldados_n, batallas, sizeof(int), cmpfunc);


	/*
	 * Comparo y acumulo
	  */
 	int count=0,s=0,j,k;
 	for (k = 0,j=0;j<batallas;){
		if(soldados_n[k] > soldados_q[j]){
			count++;
			k++;
			j++;
		} else {
			j++;
		}
 	}	
 	printf("%d\n",count);
 	return 0;

}

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a  );
}