#include <stdio.h>	// Inicialização de IO no programa.
#include <locale.h> // Corrigir acentuação e definir local.

int main () { 
	setlocale(LC_ALL, "Portuguese");
	// Corrigir acentuação por meio da biblioteca de local.

	float salario = -1;
	int controle = 0;

	// Função de repetição para o intervalo 0 a 29.
	while (controle < 30) {
		// Repetição enquanto for menor que zero.
		while (salario < 0) {
		// Solicitando o salário da pessoa tal.
		printf("Digite o salário do contrato %d: R$", controle+1);	
		scanf("%f", &salario);
		}
		if (salario >= 3000) {
			printf("Aumento: R$%f \n", salario*0.03);
			printf("Salário final: R$%f \n", salario*1.03);
		}
		else { 
			if (salario > 1000) {
			printf("Aumento: R$%f \n", salario*0.10);
			printf("Salário final: R$%f \n", salario*1.10);	
			}
			else {
			printf("Aumento: R$%f \n", salario*0.15);
			printf("Salário final: R$%f \n", salario*1.15);					
			}
		}
		// Retorno o valor de salario para -1.
		salario = -1;
		// Incremento a condição de saída.
		controle++;
	}
}
