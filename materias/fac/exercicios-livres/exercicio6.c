/* a) Escreva uma função chamada calculaSomaDe2Valores que receba dois valores inteiros e retorne a sua soma.
b) Escreva uma função chamada calculaSomaDe3Valores que receba três valores inteiros e retorne a sua soma. A sua função não pode utilizar o operador '+' e, portanto, deve obrigatoriamente, utilizar a função do item a).
c) Escreva um programa que, utilizando obrigatoriamente as funções dos itens anteriores, leia do teclado três inteiros e imprima a sua soma. Se, por exemplo, os valores lidos forem 10, 20 e 30, o programa deverá imprimir uma linha semelhante à linha abaixo:
Soma = 60 */

// entrada = dois valores inteiros | saída: soma

#include <stdio.h>

int calculaSomaDe2(int n1, int n2){ // recebe dois inteiros, faz a adição e mostra a soma.
    return n1 + n2;
}

// entrada: três valores inteiros | saída: soma
// limitação: não pode usar o operador "+"

int calculaSomaDe3(int n1, int n2, int n3){ // recebe três inteiros, faz a adição e mostra a soma.
    int somaParcela = calculaSomaDe2(n1,n2);
    return calculaSomaDe2(somaParcela, n3);
}

// entrada: 3 inteiros (solicitação) | saída: 'Soma = X'
// limitações: utilizar as funções
int main(){ // lê três inteiros e imprime a soma utilizando as funções criadas acima.
    int n1, n2, n3;

    printf("Digite, respectivamente, os três valores inteiros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Soma = %d\n", calculaSomaDe3(n1,n2,n3));

    return 0;
}