#include<stdio.h>
#include<stdlib.h>
#include <conio.h>// definição do enum
enum meses_do_ano {Janeiro=1,Fevereio,Marco,Abril,Maio,Junho,Julho,Agosto,Setembro,Outubro,Novembro,Dezembro} meses;

int main(void){
    printf("Difite o numero do mes\n");
    scanf("%d",&meses);//Testando se o valor esta na faixa
     if((meses>=Janeiro)&& (meses<=Dezembro)){
            switch(meses){
            case Janeiro:
                printf("%d Janeiro", meses);
                break;
            }
     }else{
         printf("Valor Invalido\n");
         for(meses=Janeiro;meses<=Dezembro;meses++){
            printf("MES %d\n", meses);
         }
        }
}
