#include <stdio.h>
#include <string.h>

// Escreva uma função chamada celsiusKelvin que receba um valor representando uma temperatura em graus Celsius (C) e retorne o valor correspondente em graus Kelvin (K). Fórmula de conversão: K = C + 273.15
// entrada: graus celcius (C) | saída: conversão em Kelvin

float celsiusKelvin(float gCelsius){
    float gKelvin = gCelsius + 273.15;

    return gKelvin;
}

// Escreva uma função que chamada kelvinFahrenheit que receba um valor representando uma temperatura em graus Kelvin e retorne o valor correspondente em graus Fahrenheit (F). Fórmula de conversão:
// F = (K - 273.15) * 1.8 + 32
// entrada: graus Kelvin (K) | saída: graus Fahrenheit (F)

float kelvinFahrenheit(float gKelvin){
    float gFahrenheit = (gKelvin - 273.15) * 1.8 + 32;
    return gFahrenheit;
}

// Escreva uma função que chamada celsiusFahrenheit que receba um valor representando uma temperatura em  graus Celsius(C) e retorne uma string com  a temperatura em Celsius e a equivalente temperatura em Fahrenheit(F) no seguinte formato:  'xxx.x ºC === yyy.y ºF'  . Esta função deve ativar as funções do itens a) e b)
// entrada: graus Celsius (C) | saída: string em Celcius convertendo em fahrenheit.

char* celsiusFahrenheit(float gCelsius){
    float fahrenheit;
    static char CelsiusFah[50];

    fahrenheit = kelvinFahrenheit(celsiusKelvin(gCelsius));
    sprintf(CelsiusFah, "%.1fºC === %.1fºF", gCelsius, fahrenheit); //uso do 'sprintf' para armazenar no buffer (array de caracteres)

    return CelsiusFah;
}

// Escreva a função exibeResposta que receba uma string e exiba na tela ( imprima) esta string centralizada em uma linha de comprimento 30 e entre duas linhas de '*' de comprimento 30.
// entrada: string centralizada exibindo respostas entre * (30)

void exibeResposta(float temp){
    int comprimentoString = strlen(celsiusFahrenheit(temp));
    int espacos = (30 - comprimentoString) / 2; // cálculo para centralizar em 30 caracteres
    printf("******************************\n");
    printf("%*s%s\n", espacos, "", celsiusFahrenheit(temp));
    printf("******************************\n");

    return;
}

int main(){
    float temperatura;
    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &temperatura);

    exibeResposta(temperatura);

    return 0;
}