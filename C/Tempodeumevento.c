#include <stdio.h>
int Do, Ho, Mo, So, Di, Hi, Mi, Si, Df, Hf, Mf, Sf;
char lixo[5];
int main() {
scanf("%s %d", lixo, &Do);

scanf("%d %s %d %s %d", &Ho, lixo, &Mo, lixo, &So);

scanf("%s %d", lixo, &Df);

scanf("%d %s %d %s %d", &Hf, lixo, &Mf, lixo, &Sf);



if(So>Sf){
    Sf=Sf+60;
    Si=Sf-So;
    Mf=Mf-1;    }
else {
    Si=Sf-So;    }

    if(Mo>Mf){
    Mf=Mf+60;
    Mi=Mf-Mo;
    Hf=Hf-1;    }
else {
    Mi=Mf-Mo;   }
    
    if(Ho>Hf){
    Hf=Hf+24;
    Hi=Hf-Ho;
    Df=Df-1;    }
else{
    Hi=Hf-Ho;   }


Di=Df-Do;
    

    printf("%d Dia(s)\n", Di);
    printf("%d Hora(s)\n", Hi);
    printf("%d Minuto(s)\n", Mi);
    printf("%d Segundo(s)\n", Si);




    return 0;
}