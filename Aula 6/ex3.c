#include <stdio.h>
#include <stdlib.h>

void triangulo(int a, int b, int c, char d*) {
	if (a == b && b == c) {
		d* = "E";
	} else if (a != b && c != b && a != c) {
		*d = "S";
	} else {
		*d = "I";
	}
}

int main() {
	int x, y, z;
	char d;
	printf("Digite 3 lados do triangulo: \n");
	scanf("%d%d%d", &x, &y, &z);
	triangulo(x, y, z, &d);
	printf("tipo de triangulo: %c \n", tri);
} 
