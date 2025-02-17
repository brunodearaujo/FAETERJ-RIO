int num1[10]; // vetor do tipo inteiro chamado num1 com tamanho 10.

int num2[] = {1,2,3,4,5}; // vetor do tipo inteiro chamado num2. Observe que não foi informado o tamanho mas foi informado um conjunto de dados. Neste caso o vetor terá o mesmo tamanho do conjunto informado, tamanho 5.

int num3[5] = {1,2,3}; // vetor do tipo inteiro chamado num3. Observe que foi informado o tamanho do vetor e um conjunto de dados MENOR que o tamanho do vetor. Neste caso as duas posições finais do vetor, índices 3 e 4, serão preenchidas com zero.

int num4[5] = {1,2,3,4,5,6}; // vetor do tipo inteiro chamado num4. Observe que foi informado o tamanho do vetor e um conjunto de dados MAIOR que o tamanho do vetor. Neste caso é considerado o tamanho informado entre o par de colchetes. Assim, os elementos excedentes no conjunto serão perdidos, neste caso e elemento 6.

int num5[5] = {0}; // vetor do tipo inteiro chamado num5. Observe que foi informado o tamanho do vetor e um conjunto de dados menor que o tamanho do vetor. Neste caso, como já vimos, as demais posições serão preenchidas com zero, preenchendo todo o vetor com zero.

char letras1[100]; // vetor do tipo char chamado letras1 com tamanho 100.

char vogais[5] = {'a','e','i','o','u'}; // vetor do tipo char chamado vogais com tamanho 5. Observe que para informar um conjunto de caracteres, cada um precisa estar entre aspas simples.

float notas[3] = {7.3, 8.5, 4.6}; // vetor do tipo float chamado notas e preenchido com três notas.
// Ponteiros:
// *ptr : o conteúdo dentro da variável apontada por ponteiro ptr (%d, por exemplo)
// ptr : endereço da variável apontada (%p)
// &ptr : endereço do ponteiro (%p)
// a função pode receber como parâmetro um ponteiro e na hora de colocar o parâmetro apenas digitar o endereço. por exemplo: funcao(&num); e na função estaria: int funcao(*num);
