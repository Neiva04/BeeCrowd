#include<stdio.h>
/*
2306 BEECROWD
*/
int a, sominha, soma=0, variavel = 1, movimento = 0;
int uri(int a){

    scanf("%d", &a);
    sominha = (a*(1+a))/2;
    //printf("%d", sominha);
    int pilha[a];
    for(int cont=0;cont<a;cont++){
        scanf("%d", &pilha[cont]);
        soma = soma + pilha[cont];
    /*soma += pilha[cont]*/
    }
    soma -= sominha;
    if(soma%a == 0){
    variavel += soma/a;
        for(int cont=0; cont<a; cont++){
            if(pilha[cont]>variavel) movimento += (pilha[cont]-variavel);
            
            variavel++;
        }
    printf("%d\n", movimento);
    }
else printf("-1\n");

}
int main(){
uri(a);
return 0;   }