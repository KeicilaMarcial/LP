#include<stdio.h>
#include<stdlib.h>
#include <conio.h>// definição do enum
enum tipo_quaternario {Falso,Verdadeiro,Intermediario,Maximo} quaternario;

void main(){
    int v[3];
    int soma=0;
    int media=0;
    int status;
    for(int i=0;i<3;i++){
        printf("Digite a nota %d\n",i+1);
        scanf("%d",&v[i]);
        soma=soma+v[i];
    }
    media=soma/3;
    if( media<5 && media<7){
       status=Falso;
    }
    if(media>=5 && media <7){
      status=Intermediario;
    }
    if(media>=7 && media<10){
         status=Verdadeiro;
    }
      if(media==10){
         status=Maximo;
    }

    switch(status){
    case Falso: printf(" Media %d - Reprovado ", media); break;
    case Intermediario: printf(" Media %d - Itermediario ", media); break;
    case Verdadeiro: printf(" Media %d - Aprovado ", media); break;
    case Maximo: printf(" Media %d - Aprovado com nota maxima", media); break;
    }
}
