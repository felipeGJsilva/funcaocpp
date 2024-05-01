#include <stdio.h>

int calcularAreaQuadrado(int lado){
    return lado * lado;
}

int main(){

    int lado;

    printf("Digite o numero: ");

    scanf("%d",&lado);

    int area = calcularAreaQuadrado(lado);

    printf("A áre do quadrado é: %d\n", area);

    return 0;
}