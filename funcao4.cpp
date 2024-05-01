#include <stdio.h>

int calcularFatorial(int num){
    int resultado = 1;
    for (int i = 2; i <= num; ++i)
    {
        resultado *= i;
    }
    return resultado;
}    

int main(){

    int numero;
    printf("Digite o numero: ");
    scanf("%d",&numero);
    printf("O fatorial de %d é %d\n", numero,calcularFatorial(numero));
    return 0 ;

}


