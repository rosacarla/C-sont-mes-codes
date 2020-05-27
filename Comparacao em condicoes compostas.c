/*
Exemplo: estrutura de selecao composta
Funcao: if-else para comparar nros
Dev: Carla Edila Silveira
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
    //Permite usar idioma local.
    setlocale(LC_ALL,"");
    int numero;
    printf("Digite um número: ");
    scanf("%d",&numero);
    if(numero >0){
        printf("\nO número é maior que 0\n");
    }
    else{
        printf("\nO número é menor ou igual a 0.\n");
    }
    return 0;
}
