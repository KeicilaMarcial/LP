#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#define PI 3.14
//Triangulo A=(b*a)/2
//Circulo A=(pi*r^2)
//Quadrado A= lado *lado
struct{
	float triangulo[2];
	float circulo;
	float quadrado;

}typedef Tgeometrica;

float calcArea(int opcao, Tgeometrica valores){
    int i=0;
    float b=0, a=0, area=0;
     switch(opcao){
         case 1 :
                for(i=0;i<2;i++){
                   b= valores.triangulo[i];
                   a= valores.triangulo[i+1];
                   break;
                }
                area= (b*a)/2;
                break;
         case 2 :
                area= PI *(pow(valores.circulo,2));
                break;
         case 3 :
                area=(pow(valores.quadrado,2));
                break;
    }
     return  area;
}

int main(){
Tgeometrica valores;
int escolha=0, i=0,j=0, opcao=0;
     printf("Area\n1- Trinangulo\n2-Circulo\n3-Quadrado\n");
     scanf("%d",&escolha);
     switch(escolha){
         case 1 :
                    printf("Digite a base e depois a altura do triangulo\n");
                    for(j=0;j<2;j++){
                        scanf("%f", &valores.triangulo[j]);
                     }
                     opcao=1;
                   printf("%f",calcArea(opcao, valores)) ;
                break;
         case 2 :
                printf("Digite o Raio do Circulo");
                scanf("%f", &valores.circulo);
                 opcao=2;
                printf("%f",calcArea(opcao, valores)) ;
                break;
         case 3 :
          printf("Digite o lado do Quadrado");
                scanf("%f", &valores.quadrado);
                 opcao=3;
               printf("%f",calcArea(opcao, valores)) ;
                break;
    }
}
