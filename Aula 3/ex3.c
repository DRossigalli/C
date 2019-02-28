#include <stdio.h>
#include <string.h>

int main() {
	char nome[15], nomecompleto[15];
	
	printf("digite o nome: \n");
	fflush(stdin);
	scanf("%s", nome);
	printf("\n O nome: %s\n", nome);
	puts(nome);
	
	printf("Pode digitar o nome completo agora: \n");
	fflush(stdin);
	gets(nomecompleto);
	
	printf("\n O nome : %s\n", nomecompleto);
}
