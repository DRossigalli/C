#include <stdio.h>
int main() {
	float f, c;
	printf("Digite a temperatura em Fahrenheit")
	scanf("%f", &f);

	c = (float) 5/9 * (f - 32); //casting
	printf("F = %0.1f \t C = %0.1f \n")
}