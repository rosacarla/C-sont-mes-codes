/*
Exemplo: estrutura de selecao switch
Funcao: switch de conversão do mês em numeral para texto
Dev: Carla Edila Silveira
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
    //Permite usar escrita em idioma local.
    setlocale(LC_ALL,"");
    int mes;
    printf("Digite o mês em formato numérico: ");
    scanf("%d",&mes);
    switch(mes){
        case 1:
            printf("\nJaneiro\n");
            break;
        case 2:
            printf("\nFevereiro\n");
            break;
        case 3:
            printf("\nMarço\n");
            break;
        case 4:
            printf("\nAbril\n");
            break;
        case 5:
            printf("\nMaio\n");
            break;
        case 6:
            printf("\nJunho\n");
            break;
        case 7:
            printf("\nJulho\n");
            break;
        case 8:
            printf("\nAgosto\n");
            break;
        case 9:
            printf("\nSetembro\n");
            break;
        case 10:
            printf("\nOutubro\n");
            break;
        case 11:
            printf("\nNovembro\n");
            break;
        case 12:
            printf("\nDezembro\n");
            break;
        default:
            printf("\nVocê digitou um valor inválido.\nTente de novo.\n");
    }
    return 0;
}
