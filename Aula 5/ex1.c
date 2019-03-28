#include <stdio.h>

float media_com_pesos(float val1, float val2) {
	return (0.4 * val1 + 0.6 * val2);
}

int main() {
	float val1, val2, media;
	int i;
	
	for (i = 0; i < 2; i++) {
		printf("Insira duas notas\n");
		scanf("%f%f", &val1, &val2);
		media = media_com_pesos(val1, val2);
		printf("A media desse aluno e de -> %0.1f\n", media);	
	}
	
}
