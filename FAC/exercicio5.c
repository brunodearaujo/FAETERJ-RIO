#include <stdio.h>
/* Uma biblioteca distribui um cartão magnético para que os alunos possam frequentá-la. 
A senha inicial é enviada pelo correio e é gerada automaticamente a partir da data de nascimento do aluno do seguinte modo:
somar os dígitos do dia da data de nascimento (a) ;
somar o dígitos do mês da data de nascimento (b); e
somar os dois últimos dígitos do ano de nascimento (c).

A senha é formada pela string a+b+c. Para ajudar a biblioteca, faça a função soma_dig (n) que recebe como parâmetro um número inteiro de 2 algarismos e
retorna a soma dos algarismos deste número. DICA: 13//10=1 13%10=3.
Por exemplo, se o usuário nascer em 26/11/76 a senha de acesso deve ser 8213.

 */

// entrada: data de nascimento | saída senha da soma dos algarismos

int somaDig(int algarismo){
int senha = (algarismo / 10) + (algarismo % 10);

return senha;
}

void gerarSenha(int a, int b, int c){
    int s1 = somaDig(a);
    int s2 = somaDig(b);
    int s3 = somaDig(c);

    printf("\nA senha do usuário é: %d%d%d\n", s1, s2, s3);

    return;
}

int main(){
    int a, b, c;

    printf("Digite, respectivamente, a data de nascimento no formato: dd, mm, aa: \n");
    scanf("%d %d %d", &a, &b, &c);
    gerarSenha(a, b, c);

    return 0;
}