/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferen�a do 
produto de A e B pelo produto de C e D segundo a f�rmula: DIFERENCA = (A * B - C * D). 
Apresente o resultado da seguinte forma:*/

#include<stdio.h>

int main(){
	int A, B, C, D, diferenca;
	
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	
	printf("Digite o valor de B: ");
	scanf("%d", &B);
	
	printf("Digite o valor de C: ");
	scanf("%d", &C);
	
	printf("Digite o valor de D: ");
	scanf("%d", &D);
	
	diferenca = (A * B) - (C * D);
	
	printf("DIFERENCA = (%d * %d - %d * %d)\n", A, B, C, D);
	printf("DIFERENCA = %d\n", diferenca);
	
	return 0;
}
