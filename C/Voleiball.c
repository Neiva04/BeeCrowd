#include <stdio.h>
//Eduardo Nery, João Marcelo Costa Miranda e Joseph Neiva
int main() {
    int n, cont=0;
    double saque, bloqueio, ataque, saqueS, bloqueioS, ataqueS;
    double totalS=0, totalA=0, totalB=0, totalSS=0, totalBS=0, totalAS=0;
    double pa, ps, pb;
    scanf("%d", &n);
    char nome[n];
    
    while(cont<n){
        scanf("%s", nome);    
        scanf("%lf %lf %lf", &saque, &bloqueio, &ataque);
        scanf("%lf %lf %lf", &saqueS, &bloqueioS, &ataqueS);
        totalS= totalS + saque;
        totalB= totalB + bloqueio;
        totalA= totalA + ataque;
        totalSS= totalSS + saqueS;
        totalBS= totalBS + bloqueioS;
        totalAS= totalAS + ataqueS;
        
        cont++;
            }
    
    ps = totalSS/totalS;
    pb = totalBS/totalB;
    pa = totalAS/totalA;
    
    printf("Pontos de Saque: %.2lf %%.\n", ps*100);
    printf("Pontos de Bloqueio: %.2lf %%.\n", pb*100);
    printf("Pontos de Ataque: %.2lf %%.\n", pa*100);
return 0;            
}
