#include <stdio.h>
/*a) Escreva uma função chamada produtoDe2Valores que receba dois valores inteiros e retorne o seu produto.

entrada: dois valores inteiros
saída: seu produto*/
int produtoDe2Valores(int f1, int f2){
    return f1 * f2;
}

/*b) Escreva uma função chamada produtoDe4Valores que receba quatro valores inteiros e retorne o seu produto. A sua função não pode utilizar o operador '*' e, portanto, deve obrigatoriamente, utilizar a função do item a).

entrada: quatro valores inteiros
saída: seu produto
limitações: não pode utilizar o operador "*" e precisa usar a função acima*/
int produtoDe4Valores(int f1, int f2, int f3, int f4){
    int primeiroFator = produtoDe2Valores(f1,f2);
    int segundoFator = produtoDe2Valores(f3,f4);
    
    return produtoDe2Valores(primeiroFator, segundoFator);
}

/*c) Escreva um programa que, utilizando obrigatoriamente as funções dos itens anteriores, leia do teclado quatro inteiros e imprima o seu produto. Se, por exemplo, os valores lidos forem 2, 3, 4 e 5, o programa deverá imprimir uma linha semelhante à linha abaixo:
Produto = 120

entrada = quatro inteiros
saída: seu produto*/

int main(){
    int n1, n2, n3, n4;
    printf("Digite quatro números inteiros respectivamente:\n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    printf("\n Produto = %d\n", produtoDe4Valores(n1,n2,n3,n4));

    return 0;
}