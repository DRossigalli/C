#include <stdio.h>
int main() {
	int k;
	char resp;
	printf("Digite um valor inteiro \n");
	scanf("%d", &k);

	fflush(stdin); //limpar o buffer

	printf("Escreva um caractere \n")
	scanf("%c", &resp);
	printf("resp = %c \t k = %d \n", resp, k)
}