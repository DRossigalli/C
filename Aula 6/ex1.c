#include <stdio.h>
#include <stdlib.h>

void delta(int a, int b, int c, int *d) {
	*d = b * b - 4 * a * c;
}

int main () {
	int x, y, z, d;
	printf("Digite 3 coeficientes: \n");
	scanf("%d%d%d", &x, &y, &z);
	delta(x, y, z, *d);
	printf("Dicriminante: %d \n", d);
}
