/*Faça uma função que recebe um valor inteiro e verifica se o valor é positivo, 
negativo ou zero. A função deve retornar 1 para valores positivos, -1 para 
negativos e 0 para o valor 0.*/
#include<stdio.h>

int verificar(int n1){
    int resultado;
    if(n1<0){
        resultado = -1;
    }else{
        if(n1 == 0){
            resultado = 0;
        }else{
            resultado = 1;
        }
    }
    return resultado;
}

int main(){
    int valor;
    printf("Informe um valor: ");
    scanf("%d", &valor);
    printf("%d", verificar(valor));
}