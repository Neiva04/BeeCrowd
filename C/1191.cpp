#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tp_no {
    char info;
    struct tp_no *dir;
    struct tp_no *esq;
}tp_no;


tp_no *aloca_no(char info){
    tp_no *no;
    no=(tp_no*)malloc(sizeof(tp_no));
    no->info = info;
	no->esq=no->dir = NULL;
    return no;
}

void pos_ordem(tp_no *p){
//imprime os elementos em pos ordem (sae sad raiz)
     if(p!=NULL){
        pos_ordem(p->esq);
        pos_ordem(p->dir);
        printf("%c", p->info);
    }
}

int rearranjo(char *aux, int inicio, int fim, char info){
	for(int i = inicio; i <= fim; ++i)
		if (aux[i] == info)return i;
	return -1;
}

    int cont;
tp_no* arv(char *prefixa, char *infixa, int valorI, int valorF){

	int infixaIndice;
    //printf("aaaaaaaaaaaa");
	if (valorI > valorF) return NULL;

	tp_no *no = aloca_no(prefixa[cont]);
    cont++;
	if (valorI == valorF) return no;

	infixaIndice = rearranjo(infixa, valorI, valorF, no->info);
	no->esq = arv(prefixa, infixa, valorI, infixaIndice - 1);
	no->dir = arv(prefixa, infixa, infixaIndice + 1, valorF);

	return no;

}


int main (){

	char prefixa[100], infixa[100];

	while (scanf("%s %s", prefixa, infixa) != EOF){
        //printf("%s", prefixa);
        //printf(" %s", infixa);

		int tam = strlen(infixa);
        cont=0;
		tp_no *raiz = arv(prefixa, infixa, 0, tam - 1);
		pos_ordem(raiz);
		printf("\n");

	}
return 0;
}