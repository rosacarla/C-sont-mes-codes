/*
Exemplo: estrutura de selecao
Funcao: uso do if-simples para avaliar n > 0
Dev: Carla Edila Silveira
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
    //Permite uso de idioma local.
    setlocale(LC_ALL,"");
    int numero;
    printf("Digite um n�mero: ");
    scanf("%d",&numero);
    if(numero >0){
        printf("\n\nO n�mero � maior que 0.\n");
    }
    return 0;
}
