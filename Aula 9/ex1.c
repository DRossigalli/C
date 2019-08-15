#include <stdio.h>
#include <stdlib.h>

int main() {
	float *p;
	p = (float*) malloc(sizeof(float));
	if (p == NULL) {
		printf("nao foi possivel alocar espaco requisitado \n");
	} else {
		printf("sizeof float: %d \n", sizeof(float));
		printf("endereco inicial da regiao alocada: %d\n", p);
		printf("Digite um numero real: ");
		scanf("%f", p);
		printf("apresentacao do dado armazenado na regiao: %f\n", *p);
		free(p);
	}
}
