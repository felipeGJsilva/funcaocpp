#include <stdio.h>
#include <stdbool.h> 

bool ehPar(int num){

    return num % 2 == 0;

}

int main(){
    int numero;
    printf("digite o numero: ");
    scanf("%d",&numero);
    printf("%d é %s\n", numero, ehPar(numero) ? "par" : "impar");
    return false;
}