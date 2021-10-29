#include <stdio.h>

float calculaMedia(int conjunto[], int tam){
    float soma = 0.0, resultado = 0.0;
    int i = 0;
    for (i = 0; i < tam; i++){
        soma += conjunto[i];
    }
    resultado = soma / (float) tam;
    return resultado;
}

float calculaMediana(int conjunto[], int tam){
    float resultado = 0.0;

    if((tam % 2) == 0){
        //TAMANHO DO VETOR É PAR, FAZ MÉDIA DOS DOIS ELEMENTOS CENTRAIS
        resultado = (conjunto[tam/2] + conjunto[(tam/2 - 1)]) / (float) 2;

    } else{
        //TAMANHO DO VETOR É ÍMPAR, MEDIANA É O ELEMENTO CENTRAL DO VETOR
        resultado = conjunto[tam/2];
    }
    return resultado;
}

int main(){

    int x = 0, i = 0;

    printf("\nDigite a quantidade de valores que deseja informar: \n");
    scanf("%d", & x);
    int dados[x];

    //ARMAZENA OS VALORES INFORMADOS DO USUÁRIO NO VETOR
    for(i = 0; i < x; i++){
        printf("Informe o valor %d: \n", i);
        scanf("%d", & dados[i]);
    }

    float resultadoMedia = calculaMedia(dados, x);
    float resultadoMediana = calculaMediana(dados, x);
    printf("\nO resultado da média é: %.2f\n", resultadoMedia);
    printf("\nO resultado da mediana é: %.2f\n", resultadoMediana);
}
