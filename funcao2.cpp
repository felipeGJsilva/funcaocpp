#include <stdio.h>

int somar(int a, int b){
    return a + b;
}

int main(){
    int num1, num2; 

    printf("digite num1: ");
    scanf("%d",&num1);

    printf("digite num2: ");
    scanf("%d",&num2);

    printf("A soma de %d e %d é: %d\n", num1,num2, somar(num1,num2));
    
    return 0;
}