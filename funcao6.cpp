#include  <stdio.h>

bool ehPrimo(int num){
    if (num <=1) return false;
    for(int i=2; i*i <= num; ++i){
        if (num % i ==0)return false;
    }
    return true;
}

int main(){
    int numero;
    printf("Digite o numero: ");
    scanf("%d",&numero);
    printf("%d é %s\n", numero, ehPrimo(numero) ? "primo" : "não primo");
    return 0 ;
}