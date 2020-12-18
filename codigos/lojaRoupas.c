#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/* Declarando as estruturas de enum */
 enum cores_roupas {vermelho=1, amarelo, azul, rosa, roxo, verde} cores;
 enum estacoes_ano {primavera=1,primaveraVerao,verao,altoVerao,outonoInverno,outono,inverno} estacoes;
 enum tam_roupa {pequeno=1,medio,medioGrande,grande,extraGrande} tam;

/* Fução para retornar as cores atraves dos codigo das cores */
void roupas(){
    int cores=0;
    printf("Digite o codigo da cor:\n");
    scanf("%d", &cores);
    //if para verificar se a cor esta no intervalo definido
    if((cores>=vermelho)&& (cores<=verde)){
    switch(cores){
        case vermelho: printf("%d vermelho\n", cores); break;
        case amarelo: printf("%d amarelo\n", cores); break;
        case azul: printf("%d azul\n", cores); break;
        case rosa: printf("%d rosa\n", cores); break;
        case roxo: printf("%d roxo\n", cores); break;
        case verde: printf("%d verde\n", cores); break;
    }
 }
}
/* Fução para retornar as estações atraves dos codigo dasestações */
void estacoesAno(){
    int estacoes;
    printf("Digite o codigo da estacao:\n");
    scanf("%d", &estacoes);
    //if para verificar se a estação esta no intervalo definido
    if((estacoes>=primavera)&& (estacoes<=inverno)){
        switch(estacoes){
            case primavera: printf("%d primavera\n", estacoes); break;
            case primaveraVerao: printf("%d primaveraVerao\n", estacoes); break;
            case verao: printf("%d verao\n", estacoes); break;
            case altoVerao: printf("%d alto Verao\n", estacoes); break;
            case outonoInverno: printf("%d outono Inverno\n", estacoes); break;
            case outono: printf("%d outono\n", estacoes); break;
            case inverno: printf("%d inverno\n", estacoes); break;
        }
   }


}
/* Fução para retornar o tamanhi das peças de roupas  atraves dos codigo de tamanho */
void tamRoupas(){
    int tam;
    printf("Digite o codigo de tamanho :\n");
    scanf("%d", &tam);
    //if para verificar se o tamnho da peça  esta no intervalo definido
    if((tam>=pequeno)&& (tam<=extraGrande)){
        switch(tam){
            case pequeno: printf("%d pequeno\n", tam); break;
            case medio: printf("%d medio\n", tam); break;
            case medioGrande: printf("%d medioGrande\n", tam); break;
            case grande: printf("%d grande\n", tam); break;
            case extraGrande: printf("%d extraGrande\n", tam); break;
        }
   }
}
//Função para verificar qual coleção o usuario deseja pesquisar
void identifica(int op){
    switch(op){
    case 1: roupas(); break;
    case 2: estacoesAno (); break;
    case 3: tamRoupas(); break;
    }
}

int main(){
int op=0;
  while(op!=3){
  printf("1- Cores\n2- Estacoes\n3- Tamanho\n4-Sair\n");
  scanf("%d",&op);
      identifica(op);
  }
}
