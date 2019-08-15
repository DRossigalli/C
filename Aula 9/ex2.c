#include <stdio.h>
#include <stdlib.h>

struct livro {
	char titulo [50];
	char autor [30];
	float preco;
};
typedef struct livro TipoLivro;

int main() {
	TipoLivro *p;
	p = (TipoLivro*) malloc(sizeof(TipoLivro));
	if (p == NULL) {
		printf("Non eczizste");
	} else {
		printf("sizeof TipoLivro: %d \n", sizeof(TipoLivro));
		printf("endereco inicial da regiao alocada: %d\n", p);
		printf("digite titulo, autor e preco: ");
		fflush(stdin);
		gets(p->titulo);
		fflush(stdin);
		gets(p->autor);
		scanf("%f", &p->preco);
		printf("apresentacao do dado armazenado na regiao: %s %s %f\n", p->titulo, p->autor, p->preco);
		free(p);
	}
}
