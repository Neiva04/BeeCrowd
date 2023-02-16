#include <stdio.h>
int i=1, j=7, cont;
int main(){
   while(i<10){
    for (cont=0; cont<3; cont++){
     printf("I=%d ", i);
     printf("J=%d\n", j); 
     j=j-1;
     
    } 
j=7; 
i=i+2; 
cont=0;     }
    return 0;
}