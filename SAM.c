#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cases[16][3];
int seq[16][500000];
void change_car(int cases[], int seq[]);

int main(){
	int h,i,j;
	scanf("%d",&h);
	for(i=0;i<h;i++){
		/*                      n          k             p*/
		scanf("%d %d %d",&cases[i][0],&cases[i][1],&cases[i][2]);
		for(j=0;j<cases[i][2];j++){
			scanf("%d",&seq[i][j]);
		}
	}
	for(i=0;i<h;i++){
		change_car(cases[i],seq[i]);
	}
	return 0;
}
void change_car(int cases[], int seq[]){
	int f[100000][2];
	int i,k,j,h,band,cont,resp=0,next_car,out;
	
	for(i=0;i<cases[1];i++){
		f[i][0]=seq[i];
		resp++;
	}
	k = cases[1];

	for(i=cases[1]+1;i<cases[2];i++){
		next_car=seq[i];
		band = 0;
		for(j=0;j<k;j++){
			if(next_car == f[j][0]){
				band = 1;
				break;
			}
		}
		if(band == 0){
			for(j=0;j<k;j++){
				cont=0;
				for(h=i+1;h<cases[2];h++){
					if(f[j][0] == seq[h]){
						f[j][1] = cont;
						break;
					}
					cont++;
				}
			}
			cont=0;
			for(j=0;j<k;j++){
				if(f[j][1] > cont){
					out = j;
					cont = f[j][1];
				}
			}
			f[out][0] = next_car;
			resp++;
		}
	}
	printf("%d\n", resp);
}