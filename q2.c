/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no 
plano, p1(x1, y1) e p2(x2, y2) e calcule a dist�ncia entre eles, mostrando 4 casas decimais 
ap�s a v�rgula, segundo a f�rmula:*/


#include<stdio.h>

int main(){
	float x1, y1, x2, y2, distancia;
		
	printf("Digite as coordenadas x e y do primeiro ponto: ");
	scanf("%f %f", &x1, &y1);
	
	printf("Digite as coordenadas x e y do segundo ponto: ");
	scanf("%f %f", &x2, &y2);
	
	distancia = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
	
	printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) eh: %.4f", x1, y1, x2, y2, distancia);

return 0;
}
