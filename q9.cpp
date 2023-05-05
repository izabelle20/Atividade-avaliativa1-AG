/* Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.
1 => ABACAXI – 5,00 a unidade
2 => MAÇA – 1,00 a unidade
3 => PERA – 4,00 a unidade*/


#include <stdio.h>

int main() {
	
	int opcao, quantidade;
	float total = 0;
	
	do {
		printf("MENU DE FRUTAS:\n");
		printf("1 - ABACAXI (5,00 a unidade)\n");
		printf("2 - MAÇA (1,00 a unidade)\n");
		printf("3 - PERA (4,00 a unidade)\n");
		printf("0 - Finalizar compra\n");
		printf("Digite a opção desejada: ");
		scanf("%d", &opcao);
		
	switch(opcao) {
		case 1:
		printf("Digite a quantidade desejada de abacaxis: ");
		scanf("%d", &quantidade);
		total += quantidade * 5;
		break;
		
		case 2:
		printf("Digite a quantidade desejada de maçãs: ");
		scanf("%d", &quantidade);
		total += quantidade;
		break;
		
		case 3:
		printf("Digite a quantidade desejada de peras: ");
		scanf("%d", &quantidade);
		total += quantidade * 4;
		break;
		
	default:
		printf("Opção inválida!\n");
		}
		} while (opcao != 0);
		printf("Valor total da compra: R$%.2f\n", total);
return 0;
