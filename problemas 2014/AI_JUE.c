#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void extr(int f, char * x);

int main(){
    char  a[10];
    scanf("%s",a);
    printf("%s\n",a);

    extr(1,a);

    return 0;

}

void extr(int f, char * x){
    char * num, *den, *sub, *aux;


    int i, pos, n, d;

    sub = x;
    
    while(f > 0){
        aux = sub;
        sub = strchr(aux, '/');
        pos =(int)(sub - aux);
        pos--;
        memcpy(num, aux, pos);
        printf("%s\n",num);
        n = atoi(num);
        printf("%d",n);
        aux = sub++;
        sub = strchr(aux,' ');
        if(sub){
            pos = (int)(sub - aux);
            pos--;
            memcpy(den, aux, pos);
            d = atoi(den);
        }else{
            d = atoi(sub); 
        }
        printf("%d",d);
        f--;
    }
}
