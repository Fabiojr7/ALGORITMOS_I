/*Faça um programa que implemente uma função que recebe a idade de 
um nadador por parâmetro e retorna, também por parâmetro, 
a categoria desse nadador de acordo com a tabela abaixo:
5 a 7 anos   Infantil A
8 a 10 anos  Infantil B
11 a 13 anos Juvenil A
14 a 17 anos Juvenil B
Maiores de 18 anos Adulto*/
#include <stdio.h>

int categoria(int n1){
    int cat;
    if(n1 >= 5 && n1 <= 7){
        cat = 1;
    }else{
        if(n1 >= 8 && n1 <= 10 ){
            cat = 2;
        }else{
            if(n1 >= 11 && n1 <= 13){
                cat=3;
            }else{
                if(n1 >= 14 && n1 <= 17){
                    cat=4;
                }else{
                    cat=5;
                }
            }
        }
    }
    return cat;
}

int main(){
    int idade;
    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);
    while(idade < 5 ){
        printf("Informe a idade do nadador: ");
        scanf("%d", &idade);
    }
    switch(categoria(idade)){
        case 1:printf("O nadador esta na categoria Infantil A!");
            break;
        case 2:printf("O nadador esta na categoria Infantil B!");
            break;
        case 3:printf("O nadador esta na categoria Juvenil A!");
            break;
        case 4:printf("O nadador esta na categoria Juvenil B!");
            break;
        case 5:printf("O nadador esta na categoria Adulto!");
            break;
    }
}