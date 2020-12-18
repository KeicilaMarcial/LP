#include<stdio.h>
#include<stdlib.h>

union litros{
 // unidades de litros
  int quilolitro;
  int hectolitro;
  int decalitro;
};

union libras{
 // unidades de litros
 int librinha;
 int libra;
 int librao;
};

union metros{
 // unidades de litros
};
union kilogramas{
 // unidades de litros
};
 void menuEscolha(int op){
    switch(op){
     case 1:
        break;
    }
 }

main(){
union litros lit[3];
union libras  lib[3];
union metros m[3];
union kilogramas k[3];
int op=0;
while(op!=5){}
 printf("Metricas\n 1-Litros\n2-Libras\n3-Metros\n4-Kilogramas\n5-Sair");
 scanf("%d",&op);
 menuEscolha(op);
}
