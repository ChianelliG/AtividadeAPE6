#include <stdio.h>
#include <math.h>

int main(){ 
int opcao;

printf("digite o ddd da cidade:");
scanf("%d", &opcao);

switch(opcao){
    case 61:
    printf("Brasilia");
    break;
    
    case 71:
    printf("Salvador");
    break;
    
    case 11:
    printf("Sao Paulo");
    break;
    
    case 21:
    printf("Rio de janeiro");
    break;
    
    case 32:
    printf("Juiz de Fora");
    break;
    
    case 19:
    printf("Campinas");
    break;
    
    case 27:
    printf("Vitoria");
    break;

    case 31:
    printf("Belo Horizonte");
    break;
    
    default:
    printf("Uma cidade no Brasil sem identificacao");
}

    

}