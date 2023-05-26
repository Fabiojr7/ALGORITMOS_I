/*Escreva um programa que implementa o uso de uma a função que 
calcule e retorne a distância entre dois pontos ( x1, y1) e (x2, y2). 
Todos os números e valores de retorno devem ser do tipo float.*/
#include<stdio.h>
#include<math.h>

float calcular(float n1, float n2, float n3, float n4){
    float num1;
    num1 = sqrt(pow(n3-n1,2)+pow(n4-n2,2));
    return num1;
}
int main(){
    float x1, y1, x2, y2, resultado;
    printf("Informe o valor de x1: ");
    scanf("%f", &x1);
    printf("Informe o valor de y1: ");
    scanf("%f", &y1);
    printf("Informe o valor de x2: ");
    scanf("%f", &x2);
    printf("Informe o valor de y2: ");
    scanf("%f", &y2);
    resultado = calcular(x1,y1,x2,y2);
    printf("A distancia entre os dois pontos eh: %.2f", resultado);
}