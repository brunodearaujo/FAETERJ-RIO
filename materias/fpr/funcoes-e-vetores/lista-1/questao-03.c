/*
Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci.
*/

// A sequência de Fibonacci é um padrão numérico em que o primeiro e o segundo termo são iguais a 1 e cada termo a partir do terceiro é a soma dos dois termos anteriores.

#include <stdio.h>

int fibonacci(int n){
    float sequencia;
    // f(n) = f(n-1) + f(n-2), n >= 3
    for(int i = 0; i <= n; i++){
        if(n >= 2){
        sequencia = (i-1) + (i-2);
        }
        else{
            sequencia = 1;
        }
    }
    return sequencia;
}

int main(void){
    int n;
    n = 5;
    printf("\n%d\n", fibonacci(n));
}