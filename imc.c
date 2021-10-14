#include <stdio.h>
#include <math.h>

int main(void){

    float peso = 0.0, altura = 0.0, imc = 0.0, potencia = 0.0;

    printf("Digite seu peso em quilogramas: \n");
    scanf("%f", & peso);
    printf("Digite sua altura em metros: \n");
    scanf("%f", & altura);

    potencia = pow(altura, 2);
    imc = peso / potencia;
    printf("Seu IMC é: %.2f\n", imc);

    if(imc < 18.5){
        printf("Você está abaixo do peso!\n");
    } else if((imc >= 18.5) && (imc < 24.9)){
        printf("Você está no peso ideal!\n");
    } else{
        printf("Você está acima do seu peso ideal!\n");
    }
}
