#include <stdio.h>
#define N 3

int main() {
	int idade[N], i, cont = 0;
	for (i = 0; i < N; i++) {
		printf("digite a idade: \n");
		scanf("%d", &idade[i]);
		if (idade[i] >= 18) {
			cont++;
		}
	}
	
		printf("%d pessoas maior de idade\n", cont);
}
