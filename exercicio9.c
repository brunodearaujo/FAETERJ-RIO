#include <stdio.h>
/*a) Escreva uma função chamada calculaValorMulta que calcula a multa por atraso de uma cobrança. A multa é 1% do valor da cobrança multiplicado pelos dias de atraso. A função recebe como parâmetros o valor da cobrança e a quantidade de dias em atraso e retorna o valor da multa.

entrada: valor da cobrança e a quantidade de dias em atraso
saída: valor da multa
detalhes: a multa é 1% do valor da cobrança multiplicado pelos dias de atraso*/
float calculaValorMulta(float valorCobrança, int diasAtraso){
    float multa = 0.01 * valorCobrança* diasAtraso;
    return multa;
}

/*b) Escreva uma função chamada calculaValorASerPago que calcula o valor total a ser pago, isto é, a cobrança acrescida do valor da multa. Essa função recebe como parâmetros o valor da cobrança e a quantidade de dias em atraso e retorna o novo valor a pagar. A função deve usar, obrigatoriamente, a função do item a) para calcular o valor da multa.

entrada: valor da cobrança, quantidade de dias em atraso
saída: novo valor a pagar
detalhes: deve usar a função calculaValorMulta*/
float calculaValorASerPago(float valorCobrança, int diasAtraso){
    float multa = calculaValorMulta(valorCobrança, diasAtraso);
    float novoValor = valorCobrança + multa;
    return novoValor;
}

/*c) Escreva um programa que pergunte ao usuário o valor de uma conta e a quantidade de dias que ela está em atraso e exibe o valor a ser pago já com a multa. Utilize, obrigatoriamente, a função do item b). Observe que, como no exemplo abaixo, o valor a ser pago deve ser exibido em reais com duas casas decimais.

entrada: valor de uma conta e a quantidade de dias em atraso
saída: valor a ser pago já com a multa
detalhes: obrigatoriamente utilizar função do item b)
o valor a ser pago deve ser exibido em reais com duas casas decimais.*/
int main(){
    float valorConta;
    int diasEmAtraso;

    printf("Qual é o valor da conta em atraso?\n");
    scanf("%f", &valorConta);
    printf("Em quantos dias a conta está em atraso?\n");
    scanf("%d", &diasEmAtraso);

    printf("\nNovo valor da conta a ser pago:R$%.2f\n", calculaValorASerPago(valorConta, diasEmAtraso));

    return 0;
}