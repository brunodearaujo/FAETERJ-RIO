#include <stdio.h>
#include <math.h>

/* Escreva uma função chamada calculaAreaCirculo que receba a área do quadrado no qual a circunferência está inscrita e retorne a área do círculo. Sabe-se que:
𝑟𝑎𝑖𝑜 𝑑𝑜 𝑐í𝑟𝑐𝑢𝑙𝑜=√á𝑟𝑒𝑎 𝑑𝑜 𝑞𝑢𝑎𝑑𝑟𝑎𝑑𝑜2 E á𝑟𝑒𝑎 𝑑𝑜 𝑐í𝑟𝑐𝑢𝑙𝑜=𝜋𝑟2

entrada: área do quadrado no qual a circunferência está inscrita
saída: área do círculo */
// Utilize o valor 3.14159 para o cálculo da área acima ou, se desejar, a constante pi do módulo math.
//𝑟𝑎𝑖𝑜 𝑑𝑜 𝑐í𝑟𝑐𝑢𝑙𝑜=√á𝑟𝑒𝑎 𝑑𝑜 𝑞𝑢𝑎𝑑𝑟𝑎𝑑𝑜2 E á𝑟𝑒𝑎 𝑑𝑜 𝑐í𝑟𝑐𝑢𝑙𝑜=𝜋𝑟2
float calculaAreaCirculo(float areaQuadrado){
    float raioCirculo = sqrt(areaQuadrado) / 2; //  !!!
    float areaCirculo = M_PI * pow(raioCirculo, 2);

    return areaCirculo;
}

/*b) Escreva uma função chamada calculaAreaQuadrado que receba o comprimento da diagonal do quadrado (em metros) e retorna a sua área. Sabe-se que:
𝑙𝑎𝑑𝑜 𝑑𝑜 𝑞𝑢𝑎𝑑𝑟𝑎𝑑𝑜=𝑑𝑖𝑎𝑔𝑜𝑛𝑎𝑙√2 E á𝑟𝑒𝑎 𝑑𝑜 𝑞𝑢𝑎𝑑𝑟𝑎𝑑𝑜=𝑙2

entrada: comprimento da diagonal do quadrado em metros
saída: a sua área */

float calculaAreaQuadrado(float comprimentoDiagonal){
    float ladoQuadrado = comprimentoDiagonal / sqrt(2);
    float areaQuadrado = pow(ladoQuadrado, 2);
    
    return areaQuadrado;
}

/*c) Escreva uma função chamada areaFigura que receba o comprimento da diagonal de um quadrado (em metros) e retorne a área da parte hachurada da figura abaixo. Obrigatoriamente, esta função deve utilizar as funções dos itens anteriores.

entrada: comprimento da diagonal em metros
saída: parte hachurada da figura do enunciado
limitações: utilizar as funções anteriores*/

float areaFigura(float comprimentoDiagonal){
    float areaQuadrado = calculaAreaQuadrado(comprimentoDiagonal);
    float areaCirculo = calculaAreaCirculo(areaQuadrado);
    float areaDestacada = areaQuadrado - areaCirculo;

    return areaDestacada;
}

/* d) Escreva um programa que, utilizando as três funções dos itens anteriores, leia o comprimento da diagonal de um quadrado (em metros) e imprima a área da figura hachurada acima (em m²). Se, por exemplo, o valor lido for 10, o programa deverá imprimir a linha abaixo (ou muito semelhante):
Área da figura hachurada: 10.73 m² 

entrada: comprimento da diagonal de um quadrado (em metros)
saída: área da figura hachurada acima em m²*/

int main(){
    float comprimentoD, areaHachurada;
    
    printf("Digite o valor do comprimento diagonal do quadrado em metros: ");
    scanf("%f", &comprimentoD);

    areaHachurada = areaFigura(comprimentoD);
    printf("\nÁrea da figura hachurada: %.2fm²\n", areaHachurada);

    return 0;
}