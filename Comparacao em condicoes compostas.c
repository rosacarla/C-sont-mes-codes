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
    printf("Digite um n�mero: ");
    scanf("%d",&numero);
    if(numero >0){
        printf("\nO n�mero � maior que 0\n");
    }
    else{
        printf("\nO n�mero � menor ou igual a 0.\n");
    }
    return 0;
}
