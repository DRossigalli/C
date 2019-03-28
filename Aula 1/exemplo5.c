#include <stdio.h>
int main() {
	char r1, r2;
	printf("Escreva um caractere \n");
	r1 = getchar(); //Espera o enter para continuar

	printf("Escreva um caractere \n");
	r2 = getche(); //Não espera o enter para continuar

	printf("r1 = %c \t r2 = %c \n", r1, r2);
}