#include <stdio.h>
#include <stdlib.h>


int main(){
	int t,i;
	char words[1000000] = {'\0'};

	scanf("%d",&t);

	for (i = 0; i < t; i++)
	{
		scanf("%s",&words);
	}

	for (i = 0; i < t; i++)
	{
		printf("%s\n",words);
	}

	return 0;
}