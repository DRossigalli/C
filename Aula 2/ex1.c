#include <stdio.h>

int main() {
	float salario;
	int anos;
	
	printf("Qual e o salario?\n");
	scanf("%f", &salario);
	
	fflush(stdin);
	
	printf("Ha quantos anos esta na empresa?\n");
	scanf("%d", &anos);
	
	if (anos >= 0 && anos <= 2) {
		salario *= 1.03;
	} else if (anos <= 5) {
		salario *= 1.05;
	} else if (anos <= 10) {
		salario *= 1.07;
	} else {
		salario *= 1.09;
	}
	
	printf("O novo salario e de -> R$%0.2f", salario);
}
