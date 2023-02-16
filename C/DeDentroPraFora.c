#include<stdio.h>
#include<string.h>
//Eduardo Nery, João Marcelo Costa e Joseph Neiva
int main(){
	int N, i, j, todo, parte;
	char linha[102], certo[101];
	
	scanf("%d", &N);
	getchar();
	
	for(i=0; i<N; ++i){
	
	
	fgets(linha, 102, stdin);
	
	todo = strlen(linha) -1;
	parte = todo/2 + todo % 2;

	for(j = parte-1; j>=0; --j)
	
	certo[parte - j -1] = linha[j];
	
	
	for (j=todo-1; j>=parte; --j)
	certo[todo-j -1 + parte] = linha[j];
	
	certo[todo]='\0';
	puts(certo);
	

}
	
	return 0;
}
