#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "pilha.h"

// Função que converte um número decimal para a base escolhida
void decimalParaBase(int decimal, int base){
    tPilha pilha;
    inicializa(&pilha);

    while(decimal > 0){
        push(&pilha, decimal % base);
        decimal /= base;
    }

    while(!isEmpty(pilha)){
        printf("%d", pop(&pilha));
    }
}

int main(){
    int decimal, base;

    printf("Digite um número decimal: ");
    scanf("%d", &decimal);

    do{
        printf("Digite uma base entre 2 e 8: ");
        scanf("%d", &base);
    }while(base < 2 || base > 8);

    printf("O número %d na base %d é: ", decimal, base);
    decimalParaBase(decimal, base);
    printf("\n");

    return 0;
}
