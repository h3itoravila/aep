#include <stdio.h>	// Inicialização de IO no programa.
#include <locale.h> // Corrigir acentuação e definir local.

int main () { 
	setlocale(LC_ALL, "Portuguese");
	// Corrigir acentuação por meio da biblioteca de local.
	int idade = 0, cont = 0;
	// Enquanto idade for menor ou igual a zero (condição de repetição).
	while (idade >= 0) {
	// Solicitar a idade.
	printf("Digite a idade: ");
	// Escanear a idade
	scanf("%d", &idade);
		// Se a idade for menor que 16 anos.
		if (idade < 16) {
			// Incrementar contador.
			cont++;
		}
	}
	// Exibir número de pessoas que não podem votar.
	printf("Não podem votar: %d", cont-1);
	// Não existe idade negativa, por isso que a exibição está decrementada.
}
