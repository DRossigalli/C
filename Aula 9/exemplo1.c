#include <stdio.h>
#include <stdlib.h>

int main() {
	char *p;
	p = (char*) malloc(sizeof(char));
	if (p == NULL) {
		printf("nao foi possivel alocar espaco requisitado \n");
	} else {
		printf("sizeof char: %d \n", sizeof(char));
		printf("endereco inicial da regiao alocada: %d\n", p);
		scanf("%c", p);
		printf("apresentacao do dado armazenado na regiao: %c\n", *p);
		free(p);
	}
}
