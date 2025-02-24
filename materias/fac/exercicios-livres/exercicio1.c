#include <stdio.h>
#include <math.h>
// entrada = volumeCubo, saída = raioEsferaInscrita (a)

float calculaRaioEsferaInscrita(float volumeCubo){
    float raioEsfera;
    raioEsfera = pow (volumeCubo, 1.0/3.0) / 2; // fórmula proposta no enunciado
   
   
    return raioEsfera; // retorna o valor do calculo à função
}

float calculaVolumeEsferaInscritaCubo(float volumeCubo){
    float r = calculaRaioEsferaInscrita(volumeCubo); // utilizando a primeira função criada já com o valor necessário
    float volumeEsfera = 4.0/3.0 * M_PI * pow(r,3); // fórmula proposta no enunciado
    
    
    return volumeEsfera; // retorna o valor do cálculo à função
}

int main(){
    float volumeCubo, volumeEsfera;
    printf("Volume do cubo: ");
    scanf("%f", &volumeCubo);

    volumeEsfera = calculaVolumeEsferaInscritaCubo(volumeCubo);

    printf("\nVol da esfera = %.2f\n", volumeEsfera);
    
   
    return 0;
}
