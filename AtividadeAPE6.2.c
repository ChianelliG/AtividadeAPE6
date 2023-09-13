#include <stdio.h>
#include <math.h>

int main(){
int coditem, quantidade;
float valort;
float val100 = 10.10;
float val101 = 8.30;
float val102 = 8.50;
float val103 = 12.50;
float val104 = 13.25;

    printf("Produto         Codigo  Custo"
           "\n-------------------------------"
           "\nCachorro Quente 100     R$ 10.10"
           "\nBauru Simples   101     R$ 8.30"
           "\nBauru com ovo   102     R$ 8.50"
           "\nHamburguer      103     R$ 12.50"
           "\nCheeseburguer   104     R$ 13.25\n");
		   
		   
		printf("\nDigite o codigo do item desejado: \n");
		scanf("%d", &coditem);
		printf("\nDigite a quantidade desejada do item: \n");
		scanf("%d", &quantidade);
		
		switch(coditem){
			case 100:
				valort = quantidade * val100;
			printf("\nO valor total ficou: %.2f\n", valort);
			break;
			case 101:
				valort = quantidade * val101;
			printf("\nO valor total ficou: %.2f\n", valort);
			break;
			case 102:
				valort = quantidade * val102;
			printf("\nO valor total ficou: %.2f\n", valort);
			break;
			case 103:
				valort = quantidade * val103;
			printf("\nO valor total ficou: %.2f\n", valort);
			break;
			case 104:
				valort = quantidade * val103;
			printf("\nO valor total ficou: %.2f\n", valort);
			break;
			
			default:
				printf("\nItem nao existente. \n");
		}
		
	system("pause");	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
}
