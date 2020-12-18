#include<stdio.h>
#include<stdlib.h>

// variaveis compartolham o msm endereço de memoria
union medida{
    int centimetros;
    float metros;
    int milimetros;
};

 main(){
    union medida medicao;
     medicao.metros= 1.8;
      medicao.centimetros =180;
     medicao.milimetros =1800;

    printf("Centimetros %d\n Metros %f\n Milimetro %d\n", medicao.centimetros , medicao.metros, medicao.milimetros);

 }
