/*
Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.
*/

#include <stdio.h>

void multiplosNoIntervalo(int a, int b, int n){
    int count = 0;
    // garante que 'a' sempre seja o menor valor
    if(a > b){  
        int maior = a;
        a = b;
        b = maior;
    }
    // busca de múltiplos
    for(int i = a; i <= b; i++){
        if(i % n == 0){
        printf("%d ", i);
        count++;
        }
    }
    if (count == 0){
        printf("\nNão há múltiplos de %d no intervalo de %d a %d.\n", n, b, a);
    }

}

int main(void){
    int a, b, n;
    a = 100;
    b = 80;
    n = 101;
    multiplosNoIntervalo(a,b,n);
}