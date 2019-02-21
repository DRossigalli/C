#include <stdio.h>

int main() {
	float salario = 0, nSalario = 0, soma = 0, maiorSalario = 0;
	int n, filhos, somaFilhos = 0, cont500 = 0;
	
	printf("Qual seu salario?\n");
	scanf("%f", &salario);
	
	while (salario >= 0) {	
		printf("Quantos filhos você tem?\n");
		scanf("%d", &filhos);
		
		if (salario <= 500) {
			cont500++;
		}
		
		soma += salario;
		
		somaFilhos += filhos;
		nFilhos++;
		
		if (salario > maiorSalario) {
			maiorSalario = salario;
		}
		
		n++;
	}
	
	if (n != 0) {
		printf("A media do salario e de -> R$%0.2f\n", soma / n);
		printf("A media de filhos e de -> %d\n", (float)somaFilhos / n);
		printf("O maior salario e -> R$%f", maiorSalario);
		printf("A porcentagem de pessoas com salario abaixo de R$500 -> %0.2f%% \n", (cont500 / n) * 100);
	}
	
	
}
