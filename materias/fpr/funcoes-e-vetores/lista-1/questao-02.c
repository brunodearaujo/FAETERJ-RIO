/*
Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.
*/
#include <stdio.h>

// função de converte graus celsius para graus fanrenheit
float celsiusToFahrenheit(float c){
float f = (c * 1.8) + 32; // conversão com fórmula simplificada
return f; // retorno da conversão
}

int main(void){
    float celsius;
    celsius = 40; // definindo valor de graus celsius em 40.
    
    printf("\n%.2f graus celsius equivalem a %.2f graus fahrenheit.\n", celsius, celsiusToFahrenheit(celsius));    // exibindo resultado
}