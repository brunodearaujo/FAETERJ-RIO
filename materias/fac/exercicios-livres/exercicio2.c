#include <stdio.h>
#include <math.h>

// a) entrada: altura e raio do cilindro | saída: volume do cilindro
// volume do cilindro = M_PI x Raio² x altura

float calculaVolumeCilindro(float alturaCilindro, float raioCilindro){
    float volumeCilindro = M_PI * pow(raioCilindro, 2) * alturaCilindro;

    return volumeCilindro;
}

// entrada: altura e raio de um CONE | saída: volume do cone
// volume de um cone = 1/3 volume do cilindro de mesmo raio e mesma altura.
// para obter o volume do cilindro, esta função deve, obrigatoriamente, utilizar a função acima.

float calculaVolumeCone(float alturaCone, float raioCone){
    float volumeCone = 1.0/3.0 * calculaVolumeCilindro(alturaCone, raioCone);
    
    return volumeCone;
}

// entrada: altura e raio iguais para dois sólidos: um cilindro e um cone | saída: diferença entre os volumes dos dois sólidos, com duas casas decimais.
// para obter o volume dos dois sólidos, esta função deve, obrigatoriamente, utilizar as funções anteriores.

void exibeDiferencaVolumes(float altura, float raio){
    float diferencaVolumes = calculaVolumeCilindro(altura, raio) - calculaVolumeCone(altura, raio);

    printf("A diferença entre os volumes dos dois sólidos é de: %.2f \n", diferencaVolumes);

    return;
}

// entrada: alturas e raios iguais tanto para o cilindro quanto para o cone
// saída: diferença de volumes

int main(){
    float altura, raio;

    printf("Quais são, respectivamentes, os valores da altura e do raio do cone e do cilindro? considerando que os dois tenham os mesmos valores \n");
    scanf("%f %f", &altura, &raio);
    
    exibeDiferencaVolumes(altura, raio);

    return 0;
}