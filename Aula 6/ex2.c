#include <stdio.h>
#include <stdlib.h>

char triangulo(int a, int b, int c) {
	if (a == b && b == c) {
		return "E";
	} else if (a != b && c != b && a != c) {
		return "S";
	} else {
		return "I";
	}
}

int main() {
	int x, y, z;
	char tri;
	printf("Digite 3 lados do triangulo: \n");
	scanf("%d%d%d", &x, &y, &z);
	tri = triangulo(x, y, z);
	printf("tipo de triangulo: %c \n", tri);
} 
