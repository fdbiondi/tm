#include <stdio.h>

void calcular(int i,long casas[100000],int n);

int main() {
	int i,n,m,casa;
	long f,a,b,c,casas[100000],equipo,mudanzas[100000][2];

	scanf("%d %li",&n,&f);
	scanf("%li %li %li",&a,&b,&c);
	//calcula equipos
	casas[0] = a;
	for (i = 1; i < n; i++){
		casas[i] = (b*casas[i-1] + c) % f; 
	};

	scanf("%d",&m);
//nuevo
	for (i = 0; i < m; i++)
	{
		scanf("%li %li",&mudanzas[i][0],&mudanzas[i][1]);
	};

	for (i = 0; i < m; i++){
		casa = mudanzas[i][0] - 1;
		equipo = mudanzas[i][1];
		casas[casa] = equipo;
		calcular(casa,casas,n);
	};

	return 0;
}

void calcular(int i,long casas[100000],int n){
	int j,k,pasos;
	int r[2];
	r[0] = n;
	r[1] = n;
	j = i + 1;//indice horario
	k = i - 1;//indice antihorario
	for(pasos = 1;pasos<n;pasos++ ){
		if(j == n ){
			j = 0;
		};
		if(k == -1){
		k = n - 1;
		};
		if(casas[i] == casas[j]){
			if(pasos<r[1]){
				r[1] = pasos;
			};
		};
		if(casas[i] == casas[k]){
			if(pasos<r[0]){
				r[0] = pasos;
			};
		};
		
		j++;
		k--;
	};
	printf("%d %d\n",r[0],r[1] );
}