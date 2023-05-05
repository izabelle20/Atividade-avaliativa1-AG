/* Faça um programa que leia 10 inteiros e imprima sua média.*/


#include<stdio.h>
	int main(){
		
	int numeros[10];
	int i, soma = 0;
	float media = 0;
	
	for(i=0; i<10; i++)
	{
	    printf("Digite o %d numero: ", i+1);
	    scanf("%d", &numeros[i]);
	    
	    soma += numeros[i];
	}
	
	media = (float) soma / 10;
	
	printf("\nA media dos numeros eh: %.2f\n", media);

return 0;
}
