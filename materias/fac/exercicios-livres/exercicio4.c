#include <stdio.h>
//Escreva uma função chamada montaFracao que receba dois valores inteiros, representando o numerador e o denominador de uma fração e exibe uma string com a fração e o resultado da divisão com duas casas decimais. Por exemplo: se a função receber os valores 3 e 4, deverá retornar a string '3 / 4 = 0.75';
// entrada: numerador e denominador | saída: string 
char* montaFracao(int num, int deno){
    static char fracao[30];
    sprintf(fracao, "%d / %d = %.2f", num, deno, (float)num/deno);
    
    return fracao;
}

//Escreva um programa (BP) que, leia do teclado dois valores inteiros e mostre as duas frações que podem ser montadas com estes números, bem como os números decimais equivalentes, separadas por uma linha de '='. Exemplo: se os valores lidos forem 3 e 4, o programa deverá imprimir as seguintes linhas:
// entrada: dois valores inteiros | saída: possíveis frações separadas entre "="

int main(){
    int numerador, denominador;

    printf("Digite o numerador e o denominador: \n");
    scanf("%d %d", &numerador, &denominador);

    printf("%s", montaFracao(numerador,denominador));
    printf("\n============\n");
    printf("%s\n", montaFracao(denominador, numerador));


    return 0;
}