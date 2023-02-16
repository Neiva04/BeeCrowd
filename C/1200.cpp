/*ICARO CANELA TEXEIRA DE ALMEIDA E JOSEPH SAMUEL NEIVA*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef char tp_item;
//tp_item pode mudar a sua natureza (int, char, float, ...)
typedef struct tp_no {
    struct tp_no *esq;
    //ponteiro pra esquerda
    tp_item info;
    //informacao da raiz
    struct tp_no *dir;
    //ponteiro pra direita
}tp_no;

int cont;

typedef tp_no *tp_arvore;
//ponteiro do tipo no' que vai apontar para.. o no'

tp_arvore inicializa_arvore(){

    return NULL;
}//preencher a arvore com o null

tp_no *aloca_no(){
    tp_no *no;
    no=(tp_no*)malloc(sizeof(tp_no));
    return no;
}

int insere_no(tp_arvore *raiz, tp_item e){
/* *raiz e' um ponteiro de ponteiro vai receber o endereco de memoria da arvore,
e o valor 'e' pra ser alocado em info*/
    tp_no *pai=NULL, *novo;
    //pai vai comecar senndo null pq vai estar no topo
    tp_no *p=*raiz;
    //*p e´ o conteudo daquilo que raiz apota
    
    novo=aloca_no(); //cria um novo elemento e coloca o endereco dele no null 
    
    if(!novo) return 0; // nn deu pra alocar (novo==NULL)

    novo->info=e;
    novo->esq=NULL;
    novo->dir=NULL;
    
    while(p!=NULL){//busca posicao onde vai ser inserido o novo no'
        pai=p;
        //aqui pai vai descendo ate´ chegar no final da arvore
        if( e < p->info ) p=p->esq;
        else p=p->dir;
    }
    if (pai!=NULL){//qual ponteiro do pai (esq dir) ira´ apontar pro novo no´
        if( e< pai->info) pai->esq=novo;
        else pai->dir=novo;
    }
    else *raiz=novo;

    return 1;
}

void pre_ordem(tp_no *p,int qtd){
//imprime os elementos em pre ordem (raiz sae sad)
    if(p!=NULL){
        printf("%c", p->info);
        cont ++;
        if(cont!=qtd)
            printf(" ");
        else printf("\n");
        pre_ordem(p->esq, qtd);
        pre_ordem(p->dir, qtd);
    }
}

void em_ordem(tp_no *p,int qtd){
//imprime os elementos em ordem (sae raiz sad)
     if(p!=NULL){
        em_ordem(p->esq,qtd);
        printf("%c", p->info);
        cont ++;
        if(cont!=qtd)
            printf(" ");
        else
            printf("\n");
        em_ordem(p->dir,qtd);
    }

}

void pos_ordem(tp_no *p,int qtd){
//imprime os elementos em pos ordem (sae raiz sad)
     if(p!=NULL){
        pos_ordem(p->esq, qtd);
        pos_ordem(p->dir, qtd);
        printf("%c", p->info);
        cont++;
        if(cont!=qtd)
            printf(" ");
        else
            printf("\n");
    }

}

tp_no* busca_no(tp_no *p, tp_item a){
    while(p != NULL){
        if(a<p->info) p=p->esq;
        else 
         if(a>p->info) p=p->dir;
         else{
			 printf("%c existe\n", a); 
			 return p;
    	}
	}
	printf("%c nao existe\n", a);
    return NULL;
}


int main(){
	tp_arvore arvore;
	char funcao_s[8], info;
    int qtd = 0;
	arvore = inicializa_arvore();
 
 	
  while(scanf(" %[^\n]s", funcao_s) != EOF){
      cont = 0;
  	if(!strcmp(funcao_s, "INFIXA")){
      em_ordem(arvore,qtd);
    }else if(!strcmp(funcao_s, "PREFIXA")){
      pre_ordem(arvore,qtd);
    }else if(!strcmp(funcao_s, "POSFIXA")){
      pos_ordem(arvore,qtd);
    }else if(funcao_s[0]=='I'){
		insere_no(&arvore, funcao_s[2]);
        qtd++;
    }
    else if((funcao_s[0]== 'P')){
    	busca_no(arvore, funcao_s[2]); 
    }
  }
  
  return 0;
}