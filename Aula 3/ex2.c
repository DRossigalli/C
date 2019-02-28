#include <stdio.h>
#define N 30

int main() {
	int qtd[N], i, n;
	float soma = 0, valor[N], total[N];
	
	do {
		printf("Quantos produtos? (max 30)\n");
		scanf("%d", &n);
	} while(n < 0 || n > N);
	
	for (i = 0; i < n; i++) {
		printf("Quantas unidades foram vendidas?\n");
		scanf("%d", &qtd[i]);
		printf("Qual o valor do produto?\n");
		scanf("%f", &valor[i]);
		
		total[i] = qtd[i] * valor[i];
		soma += total[i];
		printf("O total do pedido foi de R$%0.2f\n\n", total[i]);
	}
	
	printf("A soma de todos os pedidos foi de R$%0.2f", soma);
}
