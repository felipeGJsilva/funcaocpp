#include <stdio.h>

int somar(int a, int b){
    return a + b;
}

int main(){
    int num1, num2; 

    printf("digite o primeiro numero: ");
    scanf("%d",&num1);

    printf("digite o segundo numero: ");
    scanf("%d",&num2);

    printf("A soma dos numeros: %d e %d é: %d\n", num1,num2, somar(num1,num2));
    
    return 0;
}