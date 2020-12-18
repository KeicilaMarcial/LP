/*#include<stdlib.h>
#include<stdio.h>


main(){
 int i=-1;
 for(i=0;i<5;){ printf("teste\n"); i++;}

}
*/
#include<stdio.h>
#include <locale.h>

void primo(int num[], int n){
int resultado=0;
     for (int i = 2;i<n; i++) {
            if (num[i] % i == 0 && num[i]%num[i]==0) {
                            printf("%d é um número primo\n", num[i]);
                         }else{
                            printf("%d não é um número primo\n", num[i]);
                    }
     }
}



int main() {
 setlocale(LC_ALL, "");
 int num[5]={17,2,5,1,21,18}, i, resultado = 0, n=5;

 primo(num,n);
 return 0;
}
