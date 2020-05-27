/*
Exemplo: codigo com estruturas de selecao encadeadas
Funcao: jogo de adivinhar numeros
Autora: Carla Edila Silveira
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    //Permite usar acentos do idioma local.
    setlocale(LC_ALL,"");
    int chute, sorteado;
    printf("***********************************\n");
    printf("* Bem Vindo ao Jogo de Adivinhar! *\n");
    printf("***********************************\n");

    printf("\nDigite um n�mero: ");
    scanf("%d",&chute);
    sorteado=42;

    if(chute==sorteado){
        printf("\nVoc� acertou!\n");
}
else{
        if(chute<sorteado){
            printf("\nVoc� perdeu!!! Seu chute %d � menor que o sorteado!\n",chute);
        }
        else{
            printf("\nVoc� perdeu!!! Seu chute %d � maior que o sorteado!\n",chute);
        }
    }

    printf("\n*** Game over!!! ***\n");
    return 0;
}
