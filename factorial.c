#include <stdio.h>

int main () {

	int n,temp;
	int resultado = 1;

	printf("Digite um número maior que 1 para calcularmos o seu fatorial: ");
	scanf("%d",&n);

	temp = n;

	while (temp > 1) {

		resultado *= temp;
		temp--;
		}

	printf("O fatorial de %d é: %d\n", n, resultado);

	return 0;
	}
